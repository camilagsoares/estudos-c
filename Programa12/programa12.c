#include <stdio.h>

int main () {
    int quantidade;
    printf("Digite a quantidade de pessoas que assistiram a partida \n");
    scanf("%d", &quantidade);

    

    if(quantidade < 1000){
        printf("Publico baixo");
    } else if (quantidade >= 1001 && quantidade <= 10000) {
        printf("Publico medio");
    } else if (quantidade > 10000){
        printf("Publico bom");
    }
    
    return 0;

    system("pause");
}