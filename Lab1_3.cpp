#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double x, y;
    cout << "=== Обчислення п'ятої степені суми двох чисел ===" << endl;
    cout << "Введіть перше число (x): ";
    cin >> x;
    cout << "Введіть друге число (y): ";
    cin >> y;
    double sum = x + y;
    double result = pow(sum, 5);
    cout << "\n-------------------------------------------------" << endl;
    cout << fixed << setprecision(4);
    cout << "Вхідні дані  : x = " << x << ", y = " << y << endl;
    cout << "Сума (x + y) : " << sum << endl;
    cout << "Результат    : (" << x << " + " << y << ")^5 = " << result << endl;
    cout << "-------------------------------------------------" << endl;
    return 0;
}
