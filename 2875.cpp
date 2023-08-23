#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int leftover = n + m;
    int team=0;

    while (true) {
        if (n >= 2 && m >= 1) {
            n -= 2;
            m -= 1;
            leftover -= 3;
        } else break;
        
        if (leftover < k) {
            break;
        } else team += 1;

        // cout << n << " " << m << "\n";
    }

    cout << team << "\n";
}