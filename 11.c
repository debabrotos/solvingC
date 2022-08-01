// NOT working for long number.
#include <stdio.h>
int main(){
    long long int factorial = 1, i;
    int N, T,j;
    scanf("%d", &T);
    for ( j = 0; j < T; j++)
    {
        scanf("%d", &N);
        for ( i = 2; i <= N ; i++)
        {
            factorial =  factorial * i ;
        }
        printf("%lld \n", factorial);
    }
    return 0;
}
