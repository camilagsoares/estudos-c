#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int idade;

    printf("Digite sua idade \n");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("voce eh maior de idade \n");
    } else {
        printf("Voce nao eh maior de idade \n");
    }

    return 0;
};