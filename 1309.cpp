#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

// int dp_table[100001][5001];
int dp_table[100001];

int dp (int);

int main() {
    int N;
    cin >> N;

    dp_table[1] = 3;
    dp_table[2] = 7;

}