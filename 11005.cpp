#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    unsigned int N = 0;
    string result = "";
    int B = 0;
    int cnt = 1;
    

    cin >> N >> B;

    while (N >= B) {
        if (N % B > 9) {
            result += (N % B) + 55;
        } else {
            result += to_string(N % B);
        }
        N /= B;
    }
    // cout << "N: " << N << "\n";
    if (N > 9) {
        result += (N) + 55;
    } else {
        result += to_string(N);
    }

    reverse(result.begin(), result.end());

    cout << result << "\n";

    return 0;
}