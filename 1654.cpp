#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

long long arr[10000];


long long maxNum;
long long minNum;

int main() {
    int K, N;
    cin >> K >> N;

    for (int i=0;i<K;i++) {
        cin >> arr[i];
    }

    sort(arr, arr+K);
    maxNum = arr[K-1];
    minNum = arr[0];
    minNum = 1;
    // long long ans = maxNum;
    // long long ans = minNum;
    long long mid = (minNum + maxNum) / 2;

    // while(true) {
    //     long long sum = 0;
    //     for (int i=0;i<K;i++) {
    //         sum += arr[i] / ans;
    //     }
    //     if (sum < N) {
    //         ans --;
    //     } else {
    //         break;
    //     }
    // }

    while(true) {
        if (minNum > maxNum) break;
        mid = (minNum + maxNum) / 2;
        // cout << "mid: " << mid << "\n";
        long long sum = 0;
        for (int i=0;i<K;i++) {
            sum += arr[i] / mid;
        }
        if (sum < N) {
            maxNum = mid - 1;
        } else if (sum >= N) {
            minNum = mid + 1;
        }
        // cout << "sum: " << sum << "\n";
    }

    cout << maxNum << "\n";

}
