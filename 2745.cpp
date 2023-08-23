#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    int B;
    int result =0;

    cin >> N >> B;

    int cnt = 1; // 자릿수

    for (int i=N.length()-1;i>=0;i--) {
        if (N[i] >= 65) {
            result += (N[i] - 55) * cnt;
        } else {
            result += (N[i] -48) * cnt;
        }
        
        cnt *= B;
    }

    cout << result << "\n";
    return 0;
}