#include <iostream>
#include <algorithm>

using namespace std;

int dp_table[101];

int main() {
    dp_table[1] = 9;
    dp_table[2] = 17;
    int n;
    cin >> n;

    for (int i=3;i<=n;i++) {
        dp_table[i] = ( dp_table[i-1] + 9 ) % 1000000000;
    }

    cout << dp_table[n] << "\n";
}