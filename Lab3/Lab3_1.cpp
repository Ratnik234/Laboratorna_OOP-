#include <iostream>
#include <iomanip>
using namespace std;

void printDeveloperInfo() {
    cout << "========================================" << endl;
    cout << "Розробник: Студент(ка) групи [Група]" << endl;
    cout << "Лабораторна робота: Циклічні процеси" << endl;
    cout << "Завдання 1: Добуток чисел, кратних 5" << endl;
    cout << "========================================\n" << endl;
}
int main() {
   
    printDeveloperInfo();

    int i, n;
    cout << "Введіть початкове значення i: ";
    cin >> i;
    cout << "Введіть кінцеве значення n: ";
    cin >> n;

    if (i > n) {
        cout << "\n[Помилка] Початкове значення i має бути меншим або дорівнювати n!" << endl;
        return 1;
    }

    long long product = 1;
    bool found = false;


    for (int k = i; k <= n; ++k) {
        if (k > 0 && k % 5 == 0) {
            product *= k;
            found = true;
        }
    }

    cout << "\n----------------------------------------" << endl;
    if (found) {
        cout << "Добуток чисел, кратних 5 у межах [" << i << "; " << n << "]: " << product << endl;
    }
    else {
        cout << "У діапазоні [" << i << "; " << n << "] немає натуральних чисел, кратних 5." << endl;
    }
    cout << "----------------------------------------" << endl;

    return 0;
}
