#include <stdio.h>

int main() {
	int num, soma;
	printf("Digite um valor:");
	scanf("%d", &num);
	soma = 0;
	
	//enquanto num for diferente de zero
	while (num != 0){
		soma = soma + num;
		printf("Digite um valor:");
		scanf("%d", &num);
		
	}
	
	printf("A soma: %d", soma);
	printf("\n");
	return 0; 
}
