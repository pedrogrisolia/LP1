#include <stdio.h>

int main (void) {
	char temps[50],i=0,c=0;
	short soma=0,media;
	for(i;i<50;i++) {
		printf("Digite a temperatura: ");
		scanf("%hhd",&temps[i]);
		soma=soma+temps[i];
	}
	media=soma/50;
	for(i=0;i<50;i++) {
		if(temps[i]>media) {
			c++;
		}
	}
	printf("Há %d leituras acima da media.\n",c);
	return 0;
}
