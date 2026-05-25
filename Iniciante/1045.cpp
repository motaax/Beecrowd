#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double lados[3] = {A, B, C};
    sort(lados, lados + 3);
    reverse(lados, lados + 3);

    A = lados[0];
    B = lados[1];
    C = lados[2];

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }

    double A2 = A * A;
    double B2 = B * B;
    double C2 = C * C;

    if (A2 == B2 + C2)
        cout << "TRIANGULO RETANGULO" << endl;
    else if (A2 > B2 + C2)
        cout << "TRIANGULO OBTUSANGULO" << endl;
    else
        cout << "TRIANGULO ACUTANGULO" << endl;

    if (A == B && B == C)
        cout << "TRIANGULO EQUILATERO" << endl;
    else if (A == B || A == C || B == C)
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}