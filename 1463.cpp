    #include <iostream>
    #include <algorithm>

    using namespace std;

    int arr [100001];
    int dp_table [100001];

    int main() {
        int X;
        cin >> X;

        int cnt=0;
        int mod;

        // cout << X << " ";

        while (X != 1) {
            mod = X % 3;

            if (mod == 0) {
                X /= 3;
                cnt ++;
            }
            if (mod == 1) {
                // X --;
                // X /= 3;
                // cnt += 1;

                if (X%2 == 0) {
                    if ((X-1) % 9 == 0) {
                        X --;
                        X/=3;
                        cnt+=2;
                    } else {
                        X /= 2;
                        cnt += 1;
                    }
                } else {
                    X --;
                    cnt += 1;
                }
            }
            if (mod == 2) {
                if (X % 2 == 0) {
                    X /= 2;
                    cnt ++;
                } else { // if odd
                    if ( (X-2) % 9 == 0 ) {
                        X -= 2;
                        cnt += 2;
                    } else {
                        X --;
                        X /= 2;
                        cnt += 2;
                    }
                }
            }
            // cout << X << " ";
            
        }
        // cout <<"\n";
        cout << cnt << "\n";
    }