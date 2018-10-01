#include <stdio.h>

int main (void) {
	int num;
	int soma=0;
	while (num!=0) {
		printf("Digite um numero: ");
		scanf("%d", &num);
		soma=soma+num;
	}
	printf("A soma dos numeros é: %d\n",soma);
	return 0;
}
