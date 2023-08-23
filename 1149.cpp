#include <iostream>
#include <algorithm>

using namespace std;

int dp_table [1001][3];
int arr[1001][3];

int findMin (int, int, int);

int main() {
    int n;
    cin >> n;

    for (int i=1;i<=n;i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    dp_table[1][0] = arr[1][0];
    dp_table[1][1] = arr[1][1];
    dp_table[1][2] = arr[1][2];

    for (int i=2;i<=n;i++) {
        dp_table[i][0] = min(dp_table[i-1][1], dp_table[i-1][2]) + arr[i][0];
        dp_table[i][1] = min(dp_table[i-1][0], dp_table[i-1][2]) + arr[i][1];
        dp_table[i][2] = min(dp_table[i-1][0], dp_table[i-1][1]) + arr[i][2];
    }

    cout << findMin (dp_table[n][0], dp_table[n][1], dp_table[n][2]) << "\n";


}


int findMin (int a, int b, int c) {
    int minVal = (a < b) ? a : b;
    minVal = (c < minVal) ? c : minVal;
    return minVal;
}