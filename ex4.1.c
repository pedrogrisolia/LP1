#include <stdio.h>
int eh_primo(int n);
int main(void) {
	int n,resultado;
	scanf("%d",&n);
	resultado=eh_primo(n);
	if(resultado==1) {
		printf("É primo\n");
	}
	else {
		printf("Não é primo\n");
	}
	return 0;
}
int eh_primo(int n) {
	int i;
	for(i=2;i<n;i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}
			
