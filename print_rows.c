#include <stdio.h>
#include <stdlib.h>

/* this program should print 6 rows of numbers and columns */

int main()
{
        int i,j;

        for(i = 0; i <= 5; i++)
        {
                for (j = 0; j <= i; j++)
                {
                        printf("%d", j);
                }
                printf("\n");
        }
        return (0);
}
