#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    for (int i=0; i<N; i++) {
        for (int x=0; x < (2*(N-1) + 1 - (2*i + 1))/2; x++) {
            std::cout << " ";
        }

        for (int j=0;j<(2*i +1);j++)
            std::cout << "*";

        // for (int x=0; x < (2*(N-1) + 1 - (2*i + 1))/2; x++) {
        //     std::cout << " ";
        // }

        std::cout << "\n";
    }

    for (int i=(N-2); i>=0; i--) {
        for (int x=0; x < (2*(N-1) + 1 - (2*i + 1))/2; x++) {
            std::cout << " ";
        }
        for (int j=0;j<(2*i +1);j++)
            std::cout << "*";
        // for (int x=0; x < (2*(N-1) + 1 - (2*i + 1))/2; x++) {
        //     std::cout << " ";
        // }
        std::cout << "\n";
    }
    

    return 0;
}