#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {

    double a, b, h;

    cout << "Vvedit a: ";
    cin >> a;
    cout << "Vvedit b: ";
    cin >> b;
    cout << "Vvedit h: ";
    cin >> h;

  
    if (a <= 0) {
        cout << "Error: x must be > 0" << endl;
        return 0;
    }

    cout << "x\ty" << endl;

    double x = a;
    while (x <= b) {
      
        double y = pow(cos(x), 2) + log(x) + 2;

        cout << fixed << setprecision(2) << x << "\t" << setprecision(4) << y << endl;

        x = x + h;
    }

    return 0;
}
