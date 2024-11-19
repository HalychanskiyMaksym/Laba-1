#include <iostream>
#include <vector>
#include <limits> 

int main() {
    double a, b;
    int n;
    
    std::cout << "Введіть значення a і b (a < b): ";
    std::cin >> a >> b;

    if (a >= b) {
        std::cout << "a повинно бути меншим за b\n";
        return 1;
    }

    std::cout << "Введіть кількість елементів масиву n (n <= 200): ";
    std::cin >> n;

    if (n > 200 || n <= 0) {
        std::cout << "n повинно бути від 1 до 200\n";
        return 1;
    }

    std::vector<double> X(n);
    std::cout << "Введіть елементи масиву X:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> X[i];
    }

    double sum = 0;                      
    double product = 1;                  
    bool product_exists = false;         
    double max_in_range = -std::numeric_limits<double>::infinity(); 
    double min_in_range = std::numeric_limits<double>::infinity();  
    bool range_exists = false;           

    for (int i = 0; i < n; ++i) {
        if (X[i] < a) {
            sum += X[i];                 
        }
        if (X[i] > b) {
            product *= X[i];             
            product_exists = true;       
        }
        if (X[i] >= a && X[i] <= b) {
            if (X[i] > max_in_range) {
                max_in_range = X[i];     
            }
            if (X[i] < min_in_range) {
                min_in_range = X[i];     
            }
            range_exists = true;         
        }
    }

    std::cout << "Сума чисел менших за " << a << ": " << sum << std::endl;
    
    if (product_exists) {
        std::cout << "Добуток чисел більших за " << b << ": " << product << std::endl;
    } else {
        std::cout << "Немає чисел, більших за " << b << "." << std::endl;
    }

    if (range_exists) {
        std::cout << "Максимальне число у діапазоні [" << a << ", " << b << "]: " << max_in_range << std::endl;
        std::cout << "Мінімальне число у діапазоні [" << a << ", " << b << "]: " << min_in_range << std::endl;
    } else {
        std::cout << "Немає чисел у діапазоні [" << a << ", " << b << "]." << std::endl;
    }

    return 0;
}