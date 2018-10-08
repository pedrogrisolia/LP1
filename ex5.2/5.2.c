#include <stdio.h>
int main(void) {
	int conta1;
	int conta2;
	int valor=500;
	int* conta;
	scanf("%d %d",&conta1,&conta2);
	if(conta1>conta2) {
		conta=&conta1;
	}
	else {
		conta=&conta2;
	}
	compra(conta,valor);
	printf("%d %d\n",conta1,conta2);
	return 0;
}
int compra(int* conta, int valor) {
	*conta=*conta-valor;
	return 0;
}	
	
	
