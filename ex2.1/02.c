#include <stdio.h>

int main (void) {
	int num;
	printf("Escolha um numero: ");
	scanf("%d", &num);
	int num2;
	printf("\nEscolha outro numero: ");
	scanf("%d", &num2);
	if (num>num2) {
		printf("%d é maior que %d \n", num,num2);
	} 
	else {
		if (num==num2) {
			printf("%d é igual a %d \n",num,num2);
		}
		else {
			printf("%d é menor que %d \n",num,num2);
		}
	}
		
	return 0;
}
	
