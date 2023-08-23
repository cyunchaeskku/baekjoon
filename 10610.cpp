#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string S;

    cin >> S;

    // string S = to_string(N);

    if (S.find("0") == std::string::npos) {
        cout << "-1\n";
        return 0;
    }
    int sum=0;

    for (int i=0;i<S.length();i++) {
        // sum += static_cast<int>(S[i]) - 48;
        sum += S[i] - 48;
    }

    if (sum % 3 == 0) {
        std::sort(S.rbegin(), S.rend());
        cout << S << "\n";
    } else {
        cout << "-1\n";
        return 0;
    }

    return 0;
}