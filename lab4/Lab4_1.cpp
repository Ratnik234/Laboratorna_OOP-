#include <iostream>
#include <vector>
int main() {
  
    int n;
    std::cout << "Введіть кількість елементів масиву: ";
    std::cin >> n;

    std::vector<double> arr(n);
    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    if (n < 2) {
        std::cout << "У масиві немає елементів на парних місцях." << std::endl;
        return 0;
    }

    double product = 1.0;
    std::cout << "Елементи на парних місцях: ";
    for (int i = 1; i < n; i += 2) {
        std::cout << arr[i] << " ";
        product *= arr[i];
    }
    std::cout << "\nДобуток цих елементів: " << product << std::endl;

    return 0;
}
