#include <stdio.h>
#include <math.h>
int main()
{
    int T, loop;
    scanf("%d", &T);
    for ( loop = 0; loop < T; loop++)
    {
        int num;
        scanf("%d", &num);
        double sq_root = sqrt(num);
        double dif = ceil(sq_root) - floor(sq_root);
        if (dif == 0)
        {
            printf("Yes");
        }
        else{
            printf("No");
        }
        printf("\n");
    }
}
