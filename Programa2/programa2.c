#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um numero");
    scanf("%d", &num);

    if (num == 0){
        printf("O numero eh igual a zero");
    } else if (num > 0){
        printf("O numero eh positivo");
    } else {
        printf("O numero eh negativo");
    }

    return 0;
    system("pause");

};