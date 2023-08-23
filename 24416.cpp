#include <iostream>

using namespace std;

int dp_table[41] = {0,};

int cnt=0;

int fibo (int);

int main() {
    int n;
    cin >> n;
    cout << fibo(n) << " " << cnt << "\n";
}

int fibo (int n) {
    dp_table[1] = dp_table[2] = 1;

    if (dp_table[n] == 0) {
        dp_table[n] = fibo(n-1) + fibo(n-2);
        cnt ++;
    }

    return dp_table[n];
}