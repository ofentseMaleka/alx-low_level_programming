#include <stdio.h>
/**
 * main
 * return: 0
 */

int main(void)
{
        int i;
        char j;

        for (i = 0; i < 10; i++)
                putchar('q');

        for (j = 'a'; j <= 'f'; j++)
                putchar(j);

        putchar('\n');
        return 0;
}
