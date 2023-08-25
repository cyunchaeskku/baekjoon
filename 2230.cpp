#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

long long arr[100000];


long long maxLen;
long long minLen;

int main() {
    int N;
    long long M;

    cin >> N >> M;

    for (int i=0;i<N;i++) {
        cin >> arr[i];
    }

    sort(arr, arr+N);

    long long min, max;
    min = 0;
    max = N-1;
    long long mid;

    while(true) {
        if (min > max) {
            break;
        }

        mid = (arr[min] + arr[max]) / 2;
        if (arr[max] - arr[min] == M) {
            break;
        } else if (arr[max] - arr[min] > M) {

        }

    }

    // for (int i=0;i<N;i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << "\n";


}