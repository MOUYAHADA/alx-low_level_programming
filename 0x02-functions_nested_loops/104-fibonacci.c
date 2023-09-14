#include <stdio.h>

/**
 * main - print fibonacci serie of 50
 *
 * Return: 0
 */

int main(void)
{
	int main(void)
{
    unsigned long int x, p, t, p1, p2, t1, t2;

    p = 1;
    t = 2;

    printf("%lu", p);

    for (x = 1; x < 91; x++)
    {
        printf(", %lu", t);
        t = t + p;
        p = t - p;
    }

    p1 = p / 1000000000;
    p2 = p % 1000000000;
    t1 = t / 1000000000;
    t2 = t % 1000000000;

    for (x = 92; x < 99; ++x)
    {
        printf(", %lu", t1 + (t2 / 1000000000));
        printf("%lu", t2 % 1000000000);
        t1 = t1 + p1;
        p1 = t1 - p1;
        t2 = t2 + p2;
        p2 = t2 - p2;
    }

    printf("\n");

    return (0);
}}
