#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cout << "Введіть кількість елементів масиву: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Масив порожній." << std::endl;
        return 0;
    }

    std::vector<double> arr(n);
    std::cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    double max_val = arr[0];
    double min_val = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_val) max_val = arr[i];
        if (arr[i] < min_val) min_val = arr[i];
    }

    double difference = max_val - min_val;

    std::cout << "Найбільший елемент: " << max_val << std::endl;
    std::cout << "Найменший елемент: " << min_val << std::endl;
    std::cout << "Різниця (Max - Min): " << difference << std::endl;

    return 0;
}
