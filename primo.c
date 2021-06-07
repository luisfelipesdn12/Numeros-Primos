#include <stdio.h>
#include <math.h>

#define false 0
#define true 1

int main()
{
    int N = 0;
    int *primos = malloc(N * sizeof(int));

    for (int n = 2; true; n++)
    {
        int add = true;

        for (int i = 0; i < N; i++)
        {
            if (primos[i] > sqrt(n))
            {
                break;
            }

            if (n % primos[i] == 0)
            {
                add = false;
                break;
            }
        }

        if (add)
        {
            N++;
            primos = realloc(primos, N * sizeof(int));
            primos[N - 1] = n;
            printf("%d\n", n);
        }
    }
}
