#include <stdio.h>
#include <stdlib.h>

int main (){
    int codigo;
    float salario;
    printf("Digite seu salario \n");
    scanf("%f", &salario);

    printf("Plano de aumento: n1 = 10, n2 = 20, n3 = 30. \n");
    printf("Digite seu plano de aumento \n");
    scanf("%d", &codigo);


    switch(codigo) {
        case 'A': 
        scanf("%d O aumento de 10 vai ser", (salario * 0.10) + salario);
        break;

        case 'B':
        scanf("%d O aumento de 20 vai ser", (salario * 0.20) + salario);
        break;

        case 'C':
         scanf("%d O aumento de 30 vai ser", (salario * 0.30) + salario);


        default:
        printf("Nenhum aumento");
    }

    return 0;
}