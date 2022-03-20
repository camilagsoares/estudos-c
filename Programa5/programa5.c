#include <stdio.h>
#include <stdlib.h>

int main () {
    float nota1,nota2,media;

    printf("Digite as notas do primeiro e segundo bimestre \n");
    scanf("%f %f", &nota1,&nota2);

    media = ((nota1 * 2) + (nota2  * 3)) / 5;

    printf("A media das notas eh: %f \n", media);

    if(media >= 70){
        printf("aprovado");
    } else if (media < 50){
        printf("reprovado");
    }  else if (media == 50 && media == 69){
        printf("recuperacao");
    }

    return 0;

    system("pause");
};