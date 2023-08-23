#include <iostream>

using namespace std;

int day [16];
int cost [16];

int dp_table_cost [16];
int dp_table_day [16];

int dp (int);

int main() {
    int N;
    cin >> N;

    for (int i=1;i<=N;i++) {
        cin >> day[i] >> cost[i] ;
    }

    dp_table_day[1] = day[1];
    dp_table_cost[1] = cost[1];

    // for (int i=2;i<=N;i++) {
    //     if (i + dp_table_day[i] - 1 > N) {
    //         dp_table_day[i] = dp_table_day[i-1];
    //         dp_table_cost[i] = dp_table_cost[i-1];
    //     } else if (i > dp_table_day[i-1]) {
    //         dp_table_day[i] = i + day[i] -1;
    //         dp_table_cost[i] = dp_table_cost[i-1] + cost[i];
    //     } else {
    //         dp_table_day[i] = dp_table_day[i-1];
    //         dp_table_cost[i] = dp_table_cost[i-1];
    //     }
    // }

    cout << "--------\n";

    for (int i=1;i<=N;i++) {
        cout << dp_table_day[i] << " " << dp_table_cost[i] << "\n";
    }

    // cout << dp_table_cost[N] << "\n";

    // cout << dp(N) << "\n";
}

int dp (int n) {
    if (dp_table_cost[n] == 0) {
        dp_table_cost[n] = dp(n-1);
        if (dp_table_day[n-1] < n) {
            dp_table_day[n] += n + day[n] - 1;
            dp_table_cost[n] += dp(n-1) + cost[n];
        }
    }
    return dp_table_cost[n];
}