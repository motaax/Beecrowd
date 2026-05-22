#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo1, quantidade1;
    int codigo2, quantidade2;
    double valor1, valor2, total;

    cin >> codigo1 >> quantidade1 >> valor1;
    cin >> codigo2 >> quantidade2 >> valor2;

    total = (quantidade1 * valor1) + (quantidade2 * valor2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}