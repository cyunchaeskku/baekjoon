#include <iostream>
#include <algorithm>

using namespace std;

int arr [1000001];
int dp_table [1000001];

int jihong (int a, int b, int c) {
    int min = 1000000;
    if (a < min) {
        min = a;
    }
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min =c;
    }

    return min;
}

int main() {
    int X;
    cin >> X;

    int cnt=0;
    int mod;

    dp_table[1] = 0;
    dp_table[2] = 1;
    dp_table[3] = 1;

    for (int i=4;i<=X;i++) {
        if (i % 3 == 0) {
            if (i%2==0) {
                // dp_table[i] = min(dp_table[i/2], dp_table[i/3], dp_table[i-1]) +1;
                dp_table[i] = jihong(dp_table[i/2], dp_table[i/3], dp_table[i-1]) +1;
            } else {
                dp_table[i] = min(dp_table[i/3], dp_table[i-1]) + 1;
            }
        } else {
            if ( i%2==0 ) {
                dp_table[i] = min(dp_table[i/2], dp_table[i-1]) + 1;
            } else {
                dp_table[i] = dp_table[i-1] + 1;
            }
        }
    }

    cout << dp_table[X] << "\n";
}