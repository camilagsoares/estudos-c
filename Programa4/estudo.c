#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int idade;

    printf("Digite sua idade");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("voce eh maior de idade");
    }

    return 0;
};