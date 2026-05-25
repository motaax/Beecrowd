#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A < B + C && B < A + C && C < A + B) {
        double perimetro = A + B + C;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimetro << endl;
    } else {
        double area = ((A + B) * C) / 2.0;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }

    return 0;
}