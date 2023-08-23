#include <iostream>
#include <algorithm>

using namespace std;

int p [10001] = {0,};
float p_ [10001] = {0.0,};

int dp_table[1001] = {0,};

int dp (int);

int main() {
    int N;
    int cost=0;
    cin >> N;
    for (int i=1;i<=N;i++) {
        cin >> p[i];
        p_[i] = static_cast<float>(p[i]) / i;
    }

    dp_table[1] = p[1];
    // dp_table[2] = max(dp_table[1] * 2, p[2]);

    for (int i=2;i<=N;i++) {
        for (int j=1;j<i;j++) {
            dp_table[i] = max(dp_table[i], max(dp_table[i-j] + p[j], p[i]) );
        }
    }


    // for (int i=1;i<=N;i++) {
    //     cout << dp_table[i] << " " ;
    // }
    // cout << "\n";

    cout << dp_table[N] << "\n";

}

int dp (int N) {
    if (dp_table[N] == 0) {
        dp_table[N] = max(dp(N-1) + dp_table[1], p[N]);
    }
    return dp_table[N];
}