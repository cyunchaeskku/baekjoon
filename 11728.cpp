#include <iostream>
#include <algorithm>

using namespace std;

int A[1000000];
int B[1000000];

int C[2000000];

int main() {
    int N, M;

    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> N >> M;
    for (int i=0;i<N;i++) {
        cin >> A[i];
    }

    for (int i=0;i<M;i++) {
        cin >> B[i];
    }

    sort(A, A + N);
    sort(B, B + M);

    int idx=0;
    for (int i=0;i<N;i++) {
        C[idx++] = A[i];
    }
    for (int i=0;i<M;i++) {
        C[idx++] = B[i];
    }

    sort(C, C + N + M);

    for (int i=0;i<idx;i++) {
        cout << C[i] << " ";
    }
    cout << "\n";
}