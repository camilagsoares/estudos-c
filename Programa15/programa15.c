#include <stdio.h>


int main()
{
    printf("******************* \n");
    printf("Bem vindo ao jogo \n");
    printf("******************* \n");

    int numerosecreto = 42;
    int chute;
    // int ganhou = 0;
    int tentativas = 1;

    while(1)
    {
        printf("Qual e o seu chute? \n");
        printf("Tentativa %d \n", tentativas);
        scanf("%d", &chute);
        printf("Seu chute foi %d \n", chute);

        
        if (chute <0){
            printf("Voce nao pode chutar numeros negativos \n");

            continue;
        }

        int acertou = (chute == numerosecreto);

        if (acertou)
        {
            printf("Parabens,voce acertou! \n");
            printf("Parabens em %d tentativas \n", tentativas - 1);

           break;
        }
        else 
        {
            int maior = chute > numerosecreto;
            if (maior)
            {
                printf("Seu chute foi maior que o numero secreto \n");
            }
            else
            {
                printf("Seu chute foi menor que o numero secreto \n");
            }

            tentativas++;
        }
    }
    return 0;
}