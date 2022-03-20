#include <stdio.h>

int main () {
    int num;
    printf("Digite um numero");
    scanf("%d", &num);

    if (num == 0){
        printf("Numero igual a zero");
    } else if (num > 0){
        printf("A raiz do numero eh %f", sqrt(num));
    } else {
        printf("Numero negativo");
    }

    return 0;

    system("pause");
};