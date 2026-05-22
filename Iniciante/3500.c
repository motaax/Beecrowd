#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);

    int centena = num / 100;
    int dezena = (num / 10) % 10;
    int unidade = num % 10;

    printf("Invertido = %d%d%d\n", unidade, dezena, centena);

    return 0;
}