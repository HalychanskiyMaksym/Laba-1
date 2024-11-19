#include <iostream>
#include <vector>

int main() {
    int N, T;
    std::cout << "Введіть розмір масива N: ";
    std::cin >> N;

    int* A = new int[N];
    std::cout << "Введідть числа масива A:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    std::cout << " T: ";
    std::cin >> T;

    int maxElement = -1;      
    int maxIndex = -1;          

    for (int i = 0; i < N; ++i) {
        
        if (A[i] > T && A[i] > 0 && A[i] >= maxElement) {
            maxElement = A[i];
            maxIndex = i;       
        }
    }

    if (maxIndex != -1) {
        std::cout << "Номер останнього  максимаотнрнр елемента за  " << T << ": " << maxIndex << std::endl;
        std::cout << ": " << maxElement << std::endl;
    } else {
        std::cout << "Немає чисел більше за  " << T << " в масиві." << std::endl;
    }

    delete[] A; 
    return 0;
}