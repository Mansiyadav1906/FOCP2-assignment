
   #include <iostream>
#include <string>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin >> n;

        int k = 0;

        if (n % 2 == 0) {
            k++;
            while (n % 2 == 0)
                n /= 2;
        }

        for (long long i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                k++;
                while (n % i == 0)
                    n /= i;
            }
        }

        if (n > 1)
            k++;

        cout << (1LL << k) << '\n';
    }

    return 0;
}