#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("SIZE :- ");
    scanf("%d", &n);
    int i, j, k;

    char c[2];
    printf("Enter the character you want in the pattern :- ");
    scanf("%s", c);

    for(i = 0; i < n; i++)
    {
        for (j = 1; j < 2 * (n - i) - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= i; k++)
        {
            printf("%s ", c);
        }
        for(j = 0; j <= i; j++)
        {
            printf(" %s", c);
        }
        printf("\n");
    }

    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
}