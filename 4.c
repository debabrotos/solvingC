#include<stdio.h>
int main()
{
    int  i, num, j, t;
    scanf("%d", &t);
    for ( j = 1; j <= t; j++)
    {
        scanf("%d", &num);
        i = 1 ;
        printf("Case %d : ", j);
        for ( i = 1; i <= num/2; i++)
        {
            if (num % i ==  0)
            {
                printf("%d ", i);
            }
        }
        printf("%d", num);    
        printf("\n");    
    } 
}