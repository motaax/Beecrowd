#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);

    int original = N;

    int nota100 = N / 100;
    N = N % 100;

    int nota50 = N / 50;
    N = N % 50;

    int nota20 = N / 20;
    N = N % 20;

    int nota10 = N / 10;
    N = N % 10;

    int nota5 = N / 5;
    N = N % 5;

    int nota2 = N / 2;
    N = N % 2;

    int nota1 = N;

    printf("%d\n", original);
    printf("%d nota(s) de R$ 100,00\n", nota100);
    printf("%d nota(s) de R$ 50,00\n", nota50);
    printf("%d nota(s) de R$ 20,00\n", nota20);
    printf("%d nota(s) de R$ 10,00\n", nota10);
    printf("%d nota(s) de R$ 5,00\n", nota5);
    printf("%d nota(s) de R$ 2,00\n", nota2);
    printf("%d nota(s) de R$ 1,00\n", nota1);

    return 0;
}