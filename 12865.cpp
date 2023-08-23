#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int arr [101][2];
int dp_table [100001] = {-1, }; // dp[1] == 무게 1만큼 실었을 때의 최대 가치
int weight_value [100001] = {-1,};


int dp (int);

int main() {
    int N, K;
    int max=0;

    cin >> N >> K;

    for (int i=1;i<=K;i++) {
        dp_table[i] = -1;
    }

    for (int i=1; i<=N; i++) {
        cin >> arr[i][0] >> arr[i][1];
        if (dp_table[arr[i][0]] < arr[i][1])
            dp_table[arr[i][0]] = arr[i][1];
    }

    

    // for (int i=1;i<=N;i++) {
    //     if (weight_value[arr[i][0]] < arr[i][1])
    //         weight_value[arr[i][0]] = arr[i][1];
    // }

    dp_table[0] = 0;
    dp_table[1] = 0;

    // int temp;
    // cin >> temp;
    cout << dp_table[K] << "\n";

    for (int i=1;i<=K;i++) {
        cout << dp_table[i] << " ";
    }
    cout <<"\n";

}

int dp (int n) {
    
    if (dp_table[n] == -1) {
        // int max = -1;
        // for (int i=1;i<=n/2;i++) {
        //     cout << "i: " << i << "\n";
        //     if (max < dp(i) + dp(n-i)) {
        //         cout << "*** " << max << " ***\n";
        //         max = dp(i) + dp(n-i);
        //     }
        // }
        dp_table[n] = dp(1) + dp (n-1);
    }

    return dp_table[n];
}