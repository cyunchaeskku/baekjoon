#include <iostream>

using namespace std;

int main() {
    int N;
    string s;

    while (true) {
        getline(cin, s);
        if (cin.eof()) {
            break;
        }
        int large=0, small=0, num=0, space=0; 
        for (int i=0; i<s.size(); i++) {
            // cout << s[i] << "\n";
            if (s[i] >= 97) small ++;
            else if (s[i] >= 65) large ++;
            else if (s[i] == 32) space ++;
            else if (s[i] >=48) num ++;
        }
        cout << small << " " << large << " " << num << " " << space << "\n";
    }
}