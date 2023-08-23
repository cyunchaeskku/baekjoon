#include <iostream>
#include <algorithm>

using namespace std;

int arr [1000001];
int dp_table [31][31] = {0,}; // M, N

int combination (int, int);

int main() {
    int T, N, M;
    cin >> T;

    for (int i=1;i<=30;i++) {
        for (int j=0;j<=30;j++) {
            if (i == j) dp_table[i][j] = 1;
            if (j==0) dp_table[i][j] = 1;
        }
    }

    // for (int i=0;i<=30;i++) {
    //     for (int j=0;j<=30;j++) {
    //         cout << dp_table[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    for (int t=0; t<T; t++) {
        cin >> N >> M;
        cout << combination(M,N) << "\n";
    }
}

int combination(int m, int n)
{
    if (dp_table[m][n] == 0) {
        dp_table[m][n] = combination(m-1,n-1) + combination(m-1,n);
    }

    return dp_table[m][n];
}