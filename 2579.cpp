#include <iostream>
#include <algorithm>

using namespace std;

int dp_table[301] = {0,};
int m[301] = {0,};

int stair (int);

int main() {
    int n, temp;
    cin >> n;

    for (int i=1;i<=n;i++) {
        cin >> temp;
        m[i] = temp;
    }

    dp_table[1] = m[1];
    dp_table[2] = m[1] + m[2];

    cout << stair(n) << "\n";
}

// top down
int stair (int n) {
    if (n == 0) {
        return 0;
    }
    if (dp_table[n] == 0) {
        dp_table[n] = max(stair(n-2) + m[n], stair(n-3) + m[n-1] + m[n]);
    }
    return dp_table[n];
    // return 100;
}