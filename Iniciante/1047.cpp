#include <iostream>
using namespace std;

int main() {
    int hi, mi, hf, mf;
    cin >> hi >> mi >> hf >> mf;

    int inicio = hi * 60 + mi;
    int fim = hf * 60 + mf;

    int duracao = fim - inicio;

    if (duracao <= 0)
        duracao += 24 * 60;

    int horas = duracao / 60;
    int minutos = duracao % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}