#include <cstdio>
#include <vector>

using namespace std;

int main() {
    vector<int> primos;

    for(int n = 2; true; n++) {
        bool add = true;

        for(int p : primos)
            if(n % p == 0) {
                add = false;
                break;
            }

        if(add) {
            primos.push_back(n);
            printf("%d\n", n);
        }
    }
}
