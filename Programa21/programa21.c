#include <stdio.h>

int main () {
    int salario;
    float novo;
    printf("Digite o seu salário \n");
    scanf("%d", &salario);


    printf("O novo valor do salário será: \n");
    novo = (salario * 0.13);

    scanf("%f", &novo);

    return 0;

}