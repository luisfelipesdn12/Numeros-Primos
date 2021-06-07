#include <cstdio>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    vector<int> primos;

    for (int n = 2; true; n++)
    {
        bool add = true;

        for (int p : primos)
        {
            if (p > sqrt(n))
            {
                break;
            }

            if (n % p == 0)
            {
                add = false;
                break;
            }
        }

        if (add)
        {
            primos.push_back(n);
            printf("%d\n", n);
        }
    }
}
