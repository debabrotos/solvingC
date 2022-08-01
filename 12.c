#include <stdio.h>
int main(){
    int i, k, number,count, mod;
    int T,j, N;
    scanf("%d", &T);
    for ( j = 0; j < T; j++)
    {
        scanf("%d", &N);
        for ( k = N; k > 1; k--)
        {
            N *= (k - 1);
        }
        number = N;
        printf("%d\n",number);
        count = 0;
        while (number > 0)
        {
            mod = number % 10;
            if (mod == 0){
                count++;
                number = number / 10;
            }
            else break;
        }
        printf("%d \n", count);
    }
    return 0;
}
