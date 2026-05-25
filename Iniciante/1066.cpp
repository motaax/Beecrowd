#include <iostream>
using namespace std;

int main() {
    int x;
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        cin >> x;

        if (x % 2 == 0)
            pares++;
        else
            impares++;

        if (x > 0)
            positivos++;
        else if (x < 0)
            negativos++;
    }

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

    return 0;
}