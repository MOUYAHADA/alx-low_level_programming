#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - print error and exit
 *
 * @errorNo: error number
 *
 * @filename: file name
 *
 * @fd: file descriptor to close
 */

void print_error(int errorNo, const char *filename, int fd)
{
	if (errorNo == 1)
		dprintf(STDERR_FILENO, "Error: Could not open file %s\n", filename);
	if (errorNo == 2)
	{
		dprintf(STDERR_FILENO, "Error: Could not read ELF header from %s\n",
				filename);
		close(fd);
	}
	if (errorNo == 3)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", filename);
		close(fd);
	}
	if (errorNo == 4)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", filename);

	exit(98);
}

/**
 * print_elf_header - prints the elf header
 *
 * @filename: file name
 */

void print_elf_header(const char *filename)
{
	int i, fd = open(filename, O_RDONLY);
	Elf64_Ehdr elf_header;

	if (fd == -1)
		print_error(1, filename, fd);
	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_error(2, filename, fd);
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
		print_error(3, filename, fd);
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", elf_header.e_ident[i]);

	printf("\n");
	printf("  Class:                             %s\n",
			elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			elf_header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian"
			: "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n",
			elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               0x%lx\n",
			(unsigned long)elf_header.e_entry);
	printf("  Format:                            %s\n",
			elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "elf32" : "elf64");
	close(fd);
}

/**
 * main - print the elf header of an elf file
 *
 * @ac: argument count
 *
 * @av: argument vector
 *
 * Return: 0;
 */

int main(int ac, char **av)
{
	if (ac != 2)
		print_error(4, av[0], 0);

	print_elf_header(av[1]);

	return (0);
}

