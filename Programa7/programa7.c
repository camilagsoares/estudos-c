#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char letra;
    printf("digite uma letra \n");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'a':
        printf("AMOR");
        break;
    case 'b':
        printf("BONITO");
        break;
    case 'c':
        printf("CASA");
        break;
    default:
        printf("Letra ainda sem palavra");
    }

    return 0;
    system("pause");
};