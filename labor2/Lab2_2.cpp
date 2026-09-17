#include <iostream>
int main() {

    int A, B;
    std::cout << "Введіть числа A та B (A < B): ";
    std::cin >> A >> B;

    std::cout << "Непарні числа від " << A << " до " << B << ":\n";
    for (int i = A; i <= B; ++i) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}