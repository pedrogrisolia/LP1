#include <stdio.h>

int main (void) {
	float reais;
	float dolares;
	printf("\nDigite o valor do celular em dolares: ");
	scanf("%f", &dolares);
	reais=(dolares*3.17);
	if (reais<1000.0) {
		printf("\nBOM NEGOCIO! O celular vale %f reais.\n",reais);
	} else {
	  printf("\nO celular vale %f reais.\n", reais);
	}
	return 0;
}
	
