#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int arr[500000];
int target[500000];

int binary_find(int arr[], int start, int end, int target);
int lowerBound(int[], int, int, int);
int upperBound(int[], int, int, int);

int main() {
    int N, M;

    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    
    cin >> M;
    for(int i=0;i<M;i++) {
        cin >> target[i];
    }


    // map<int, int> mp;

    // for (int i=0;i<N;i++) {
    //     mp[arr[i]] ++;
    // }

    // for (int i=0;i<M;i++) {
    //     if (mp.find(target[i]) != mp.end()) {
    //         cout << mp[target[i]] << " ";
    //     } else {
    //         cout << 0 << " ";
    //     }
    // }
    
    // cout << "\n";

    for (int i=0;i<M;i++)
        cout << upperBound(arr, 0, N-1, target[i]) - lowerBound(arr, 0, N-1, target[i]) + 1 << " ";
    cout << "\n";


}

int lowerBound(int arr[], int start, int end, int target) {
    if (start > end) {
        return start;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == target) {
        return lowerBound(arr, start, mid-1, target);
    } else if (arr[mid] > target) {
        return lowerBound(arr, start, mid-1, target);
    } else if (arr[mid] < target) {
        return lowerBound(arr, mid+1, end, target);
    }    
}

int upperBound(int arr[], int start, int end, int target) {
    if (start > end) {
        return end;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == target) {
        return upperBound(arr, mid+1, end, target);
    } else if (arr[mid] > target) {
        return upperBound(arr, start, mid-1, target);
    } else if (arr[mid] < target) {
        return upperBound(arr, mid+1, end, target);
    }
}

int binary_find(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1;
    }

    int mid = (start + end) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binary_find(arr, start, mid-1, target);
    } else if (arr[mid] < target) {
        return binary_find(arr, mid+1, end, target);
    }
}