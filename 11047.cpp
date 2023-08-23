#include <iostream>

using namespace std;

int coins [10];

int main() {
    int N, K;
    cin >> N >> K;

    for (int i=0;i<N;i++) {
        cin >> coins[i];
    }

    int cnt=0;
    int i=N-1;

    while (K != 0) {
        if (K >= coins[i]) {
            K -= coins[i];
            cnt ++;
        } else {
            i --;
        }
    }

    cout << cnt << "\n";
}