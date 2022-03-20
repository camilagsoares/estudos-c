#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"Portuguese");
    int a=40, b=50, c=60, d=70;

    if((a > b)&&(a > c)) {
        printf("A variavel A eh maior");
    } else if((b > a) || (b>c)){
        printf("A variavel B eh maior");
    } else {
        printf("Invalido");
    }

    return 0;
    system("pause");
};