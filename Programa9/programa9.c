#include <stdio.h>

int main () {
    int valor;
    printf("Digite um numero \n");
    scanf("%d", &valor);

    if (valor %5 == 0){
        printf("Eh multiplo de 5");
    } else {
        printf("Nao eh multiplo de 5");
    }

    return 0;

    system("pause");
};