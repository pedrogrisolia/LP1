#include <stdio.h>

int main (void) {
	float soma;
	float num;
	printf("\nDigite o valor do celular em dolares: ");
	scanf("%f", &num);
	soma=(num*3.17);
	if (soma<1000.0) {
		printf("\nBOM NEGOCIO! O celular vale %f reais.\n",soma);
	} else {
	  printf("\nO celular vale %f reais.\n", soma);
	}
	return 0;
}
	
