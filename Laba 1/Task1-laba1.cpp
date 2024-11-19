#include <iostream>
#include <vector>

int main() {
    int N;
    
    // Тут вводим розмір масиву
    std::cout << "Введіть розмір масиву A: ";
    std::cin >> N;
    
    // створюється масив з всіма елементами
    std::vector<int> A(N);
    std::cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }

    // Створюється масив лише для додатніх
    std::vector<int> B;

    // Сортуєм масив 
    for (int i = 0; i < N; ++i) {
        if (A[i] > 0) {
            B.push_back(A[i]);
        }
    }

    // Виводим масив лише з додатніми числами
    std::cout << "Масив B з додатними елементами:\n";
    for (int i = 0; i < B.size(); ++i) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
