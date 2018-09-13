#include <stdio.h>

int main (void) {
	int mph;
	float kph;
	printf("Digite a velocidade atual do carro: ");
	scanf("%d", &mph);
	kph=(mph/1.6);
	if (kph<80) {
		printf("ACELERE\n");
	}
	if (kph>80 && kph<100) {
		printf("MANTENHA\n");
	}
	if (kph>100) {
		printf("DESACELERE\n");
	}
	return 0;
}
