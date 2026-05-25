#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valor, soma = 0.0;
    int positivos = 0;

    for (int i = 0; i < 6; i++) {
        cin >> valor;

        if (valor > 0) {
            positivos++;
            soma += valor;
        }
    }

    double media = soma / positivos;

    cout << positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media << endl;

    return 0;
}