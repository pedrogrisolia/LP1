#include <stdio.h>

int main (void) {
	int n;
	int i=1;
	int soma=0;
	printf("Digite N: ");
	scanf("%d", &n);
	while (i<=n) {
		soma=soma+(i*i);
		i=i+1;
		
	}
	printf("Somatorio: %d\n", soma);
	return 0;
}
	
		
