#include <iostream>
#include <algorithm>

using namespace std;

int arr [100001];
int dp_table [100001];

int main() {
    int n;
    cin >> n;

    for (int i=1;i<=n;i++) {
        cin >> arr[i];
    }
    
    dp_table[1] = arr[1];

    for (int i=2;i<=n;i++) {
        if (dp_table[i-1] + arr[i] < arr[i]) dp_table[i] = arr[i];
        else dp_table[i] = dp_table[i-1] + arr[i];
    }

    // for (int i=1;i<=n;i++) {
    //     cout << dp_table[i] << " ";
    // }
    // cout << "\n";

    int max = dp_table[1];
    for (int i=1;i<=n;i++) {
        if (max < dp_table[i]) max = dp_table[i];
    }

    cout << max << "\n";



    return 0;
}