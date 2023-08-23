#include <iostream>
#include <algorithm>

using namespace std;

int dp_table [1001] = {0,};

int dp (int);

int main() {
    int n;
    cin >> n;

    dp_table[1] = 1;
    dp_table[2] = 2;

    cout << dp(n)<< "\n";
    
}

int dp (int n) {
    if (dp_table[n] == 0) {
        dp_table[n] = dp(n-2) + dp(n-1);
    }
    return dp_table[n] % 10007;
}