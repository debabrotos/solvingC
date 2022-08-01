#include <stdio.h>
int main()
{
    int m, n, i, j, k;

    scanf("%d", &m);
    for ( k = 1; k <= m; k++)
    {
        scanf("%d", &n);
        for ( i = 1; i <= n; i++)
        {
            for ( j = 1; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        printf("\n");
    }
}
