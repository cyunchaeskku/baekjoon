#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    string S;

    cin >> N;
    cin >> M;
    cin >> S;

    string target;

    for (int i=0;i<N;i++) {
        target += "IO";
    }
    target += "I";

    int cnt=0;
    size_t pos=0;
    while(true) {
        if (S.find(target, pos) == std::string::npos) {
            break;
        } else {
            pos = S.find(target, pos);
            cnt ++;
        }
        
        pos ++;
    }

    cout << cnt << "\n";

    return 0;
}