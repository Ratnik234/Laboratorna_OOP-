#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "--- Завдання 2 ---" << endl;
    cout << "Введіть m: "; cin >> m;
    cout << "Введіть n: "; cin >> n;
    cout << "\nДо розрахунку: m = " << m << ", n = " << n << endl;
    int result = ++n + ++m;
    cout << "Результат виразу (++n + ++m): " << result << endl;
    cout << "Після розрахунку: m = " << m << ", n = " << n << endl;

    return 0;
}