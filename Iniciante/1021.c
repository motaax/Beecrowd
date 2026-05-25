#include <stdio.h>

int main() {
    double valor;
    int centavos;

    scanf("%lf", &valor);

    centavos = (int)(valor * 100 + 0.5);

    int notas100 = centavos / 10000;
    centavos %= 10000;

    int notas50 = centavos / 5000;
    centavos %= 5000;

    int notas20 = centavos / 2000;
    centavos %= 2000;

    int notas10 = centavos / 1000;
    centavos %= 1000;

    int notas5 = centavos / 500;
    centavos %= 500;

    int notas2 = centavos / 200;
    centavos %= 200;

    int moeda1 = centavos / 100;
    centavos %= 100;

    int moeda050 = centavos / 50;
    centavos %= 50;

    int moeda025 = centavos / 25;
    centavos %= 25;

    int moeda010 = centavos / 10;
    centavos %= 10;

    int moeda005 = centavos / 5;
    centavos %= 5;

    int moeda001 = centavos;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda050);
    printf("%d moeda(s) de R$ 0.25\n", moeda025);
    printf("%d moeda(s) de R$ 0.10\n", moeda010);
    printf("%d moeda(s) de R$ 0.05\n", moeda005);
    printf("%d moeda(s) de R$ 0.01\n", moeda001);

    return 0;
}