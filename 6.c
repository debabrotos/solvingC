#include <stdio.h>
int main()
{
    int i, T, loop;
    scanf("%d", &T);
    for ( loop = 0; loop < T; loop++)
    {
        scanf("%d", &i); 
        int j = i, k = i, last_num, sum;

        last_num = i % 10 ;
        while (j != 0)
        {
            j = j / 10;
            i = k % 10; 
            k = j;
        }
        sum = last_num + i;
        printf("Sum = %d\n", sum);
    }
}
