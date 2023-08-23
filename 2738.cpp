#include <iostream>

int A[101][101];
int B[101][101];

int main() {
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

    int N, M;
    std::cin >> N >> M;

    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            std::cin >> A[i][j];
        }
    }

    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            std::cin >> B[i][j];
        }
    }

    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            std::cout << A[i][j] + B[i][j] << " ";
        }
        std::cout << "\n";
    }
    
}