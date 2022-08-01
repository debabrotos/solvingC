// working for ALL number.
#include <stdio.h>
int main(){
    long long int i, factorial;
    int T,j;
    scanf("%d", &T);
    for ( j = 0; j < T; j++)
    {
        scanf("%d", &factorial);
        for ( i = factorial; i > 1 ; i--)
        {
            factorial *=  (i - 1) ;
        }
        printf("%lld \n", factorial);
    }
    return 0;
}