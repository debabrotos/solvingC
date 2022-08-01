#include <stdio.h>
#include <math.h>
int main()
{
    int T, loop;
    scanf("%d", &T);
    for ( loop = 0; loop < T; loop++)
    {
        int num, sq_root;
        scanf("%d", &num);
        sq_root = sqrt(num);

        if (sq_root * sq_root == num)
        {
            printf("Yes");
        }
        else{
            printf("No");
        }
        printf("\n");
    }
}