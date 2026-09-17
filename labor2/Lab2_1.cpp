#include <iostream>

int main() {

    int a, b, c;
    std::cout << "Введіть три числа A, B, C: ";
    std::cin >> a >> b >> c;

    bool result = (a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0);

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}
