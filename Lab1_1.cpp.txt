#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
template <typename T>
T calculate(T a, T b) {
    T numerator = pow(a + b, 3) - pow(a, 3);
    T denominator = 3 * a * pow(b, 2) + pow(b, 3) + 3 * pow(a, 2) * b;
    return numerator / denominator;
}
int main() {
    cout << "--- Завдання 1 ---" << endl;
    int a_i = 1000, b_i = 1;
    cout << "Тип int (a=1000, b=1): " << calculate<double>(a_i, b_i) << endl;
    float a_f = 1000.0f, b_f = 0.0001f;
    cout << setprecision(7);
    cout << "Тип float (a=1000, b=0.0001): " << calculate<float>(a_f, b_f) << endl;
    double a_d = 1000.0, b_d = 0.0001;
    cout << setprecision(15);
    cout << "Тип double (a=1000, b=0.0001): " << calculate<double>(a_d, b_d) << endl;
    return 0;
}