#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string bulbs;
    cin >> bulbs;

    for (int k = 1; k <= n; k++) {

        string temp = bulbs;
        int operations = 0;

        for (int i = 0; i < n; i++) {

            if (temp[i] == '1') {
                operations++;

                for (int j = i; j < i + k && j < n; j++) {
                    temp[j] = '0';
                }
            }
        }

        bool allOff = true;
        for (int i = 0; i < n; i++) {
            if (temp[i] == '1') {
                allOff = false;
                break;
            }
        }

        if (allOff && operations <= m) {
            cout << k << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}