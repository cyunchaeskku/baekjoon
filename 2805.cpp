#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

long long arr[1000000];


long long maxLen;
long long minLen;

int main() {
    long long N, M;
    cin >> N >> M;
    for (int i=0;i<N;i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr+N);

    minLen = 0;
    maxLen = arr[N-1];
    long long mid;

    long long sum;

    while(true) {

        if (minLen > maxLen) break;

        sum = 0;
        mid = (minLen + maxLen) / 2;
        for (int i=0;i<N;i++) {
            sum += (arr[i] >= mid) ? arr[i] - mid : 0;
        }
        if (sum < M) {
            maxLen = mid - 1;
        } else if (sum >= M) {
            minLen = mid + 1;
        }
    }
    
    // cout << minLen << " " << mid << " " << maxLen << "\n";
    cout << maxLen << "\n";

    // for (int i=0;i<N;i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";
}