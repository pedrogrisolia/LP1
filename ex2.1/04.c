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
	else {
		if (kph>80 && kph<100) {
			printf("MANTENHA\n");
		}
		else {
			printf("DESACELERE\n");
		}
	}
	return 0;
}
