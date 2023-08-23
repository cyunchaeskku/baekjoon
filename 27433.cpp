#include <iostream>
#include <algorithm>

using namespace std;

unsigned long long fact (unsigned long long);
int main() {
    unsigned long long N;
    cin >> N;

    cout << fact (N) << "\n";
}

unsigned long long fact (unsigned long long n) {
    if (n==0 || n==1) return 1;
    return fact(n-1) * n; 
}