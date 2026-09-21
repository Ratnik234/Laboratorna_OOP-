#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void printDeveloperInfo() {
    cout << "========================================" << endl;
    cout << "Розробник: Студент(ка) групи [Група]" << endl;
    cout << "Завдання 2: Обчислення y = cos(1)*cos(2)*...*cos(n)" << endl;
    cout << "========================================\n" << endl;
}
int main() {

    printDeveloperInfo();

    int n;
    cout << "Введіть натуральне число n: ";
    cin >> n;

    if (n <= 0) {
        cout << "\n[Помилка] Число n має бути натуральним (n > 0)!" << endl;
        return 1;
    }

    double y = 1.0;
    int k = 1;

    // Використання циклу WHILE
    while (k <= n) {
        y *= cos(k);
        k++;
    }

    cout << "\n----------------------------------------" << endl;
    cout << fixed << setprecision(6);
    cout << "Результат обчислення y для n = " << n << ": " << y << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
