#include <stdio.h>

int main() {
	int num;
	printf("Digite um valor:");
	scanf("%d", &num);
	
	//enquanto o resto da divisão de 2 for igual a zero
	while (num > 0){
		if(num%2 == 0){
			printf("PAR \n");
		} else {
			printf("IMPAR \n");
		}
		printf("Digite um valor:");
		scanf("%d", &num);
	}
	
	printf("\n");
	return 0; 
}