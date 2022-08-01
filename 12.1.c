#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int T, j;
    scanf("%d", &T);
    for (j = 0; j < T; j++)
    {
        scanf("%d", &n);
        int countFive = 0, countTwo = 0;
        for (int z = 1; z <= n; z++)
        {
            int num = z;
            // Filling the array with 0
            int primeFactors[1000];
            for (int x = 0; x < 1000; x++)
            {
                primeFactors[x] = 0;
            }
            // mod with 2
            int j = 0;
            while (num % 2 == 0)
            {
                primeFactors[j] = 2;
                num = num / 2;
                j++;
            }
            // n must be odd at this point. So we can skip
            // one element (Note i = i +2)
            for (int i = 3; i <= sqrt(num); i = i + 2)
            {
                // While i divides n, print i and divide n
                while (num % i == 0)
                {
                    primeFactors[j] = i;
                    num = num / i;
                    j++;
                }
            }
            // This condition is to handle the case when n
            // is a prime number greater than 2
            if (num > 2)
                primeFactors[j] = num;

            for (int i = 0; primeFactors[i] != 0; i++)
            {
                if (primeFactors[i] == 2)
                    countTwo++;
                if (primeFactors[i] == 5)
                    countFive++;
            }
        }

        if (countTwo <= countFive )
        {
            printf("%d\n", countTwo);
        }
        else{
             printf("%d\n", countFive);
        }
    }
}
