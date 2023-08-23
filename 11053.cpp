#include <iostream>
#include <algorithm>

using namespace std;

int arr [1001];
int dp_table [1001];

int max_num ;
int min_num, min_idx;

int dp (int);

int main() {
    int N;
    cin >> N;

    for (int i=1;i<=N;i++) {
        cin >> arr[i];
        if (i==1){
            min_num = arr[i];
            min_idx = i;
        }
        if (min_num > arr[i]) {
            min_num = arr[i];
            min_idx = i;
        }
    }

    dp_table[min_idx] = 1;
    max_num = arr[min_idx];
    
    for (int i=min_idx+1; i<=N; i++) {
        dp_table[i] = dp_table[i-1];
        if (max_num < arr[i]) {
            max_num = arr[i];
            dp_table[i] += 1;
        }
    }
    for (int i=1;i<=N;i++) {
        cout << dp_table[i] << " ";
    }
    cout << "\n";
    cout << dp_table[N] << "\n";
}

int dp (int N) {
    if (dp_table[N] == 0) {
        dp_table[N] = dp_table[N-1] + 
    }
    
    return dp_table[N];
}