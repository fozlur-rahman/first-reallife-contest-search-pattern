#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    int middle = (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        if (i == middle)
        {
            for (j = 1; j <= n; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (j == middle)
                {
                    printf("#");
                }
                else
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }

    return 0;
}