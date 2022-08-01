#include <stdio.h>
#include <string.h>
int main()
{
    int i, T, last;
    char evod[101];

    while (1)
    {
        scanf("%s", &evod);
        last = strlen(evod) - 1;

        printf("%d", last);

        if (evod[last] % 2 == 0)
        {
         printf("even\n");
        }
        else{
         printf("odd\n");
        }
    }

    return 0;
}
