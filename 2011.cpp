#include <iostream>
#include <algorithm>

using namespace std;

int dp_table[5000] = {0,};

int main() {
    string s;
    cin >> s;

    int len = s.size();

    dp_table[0] = 1;
    dp_table[1] = (s[1] == 0) ? 1 : 2;

    for (int i=2; i<len; i++) {
        dp_table[i] = (s[i] == 0) ? dp_table[i-1] : dp_table[i-1] + 1;
    }

    for (int i=0;i<len;i++) {
        cout << dp_table[i] << " ";
    }
    cout << "\n";
}