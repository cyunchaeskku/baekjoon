#include <iostream>
#include <algorithm>

using namespace std;

int dp_table [11] = {0,};

int dp (int);

int main() {
    int T, n;
    cin >> T;

    dp_table[1] = 1;
    dp_table[2] = 2;
    dp_table[3] = 4;

    while(T--) {
        cin >> n;
        cout << dp (n) << "\n";


    }
}

int dp (int n) {
    if (dp_table[n] == 0) {
        dp_table[n] = dp(n-1) + dp(n-2) + dp(n-3);
    }
    return dp_table[n];
}