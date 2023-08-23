#include <iostream>

using namespace std;

int dp_table [1001][1001];

int dp (int, int);

int main () {
    int n, k;
    cin >> n >> k;

    for (int i=1; i<=n; i++) {
        for (int j=0; j<=k; j++) {
            if (i == j) {
                dp_table[i][j] = 1;
            }
            if (j == 0) {
                dp_table[i][j] = 1;
            }
            if (j == 1) {
                dp_table[i][j] = i;
            }
        }
    }

    cout << dp (n,k) <<"\n";
}

int dp (int n, int k) {
    if (dp_table[n][k] == 0) {
        dp_table[n][k] = (dp(n-1, k) + dp(n-1, k-1)) % 10007;
    }

    return dp_table[n][k];
}