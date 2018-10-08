#include <stdio.h>
void compra(int* c, int valor) {
	*c=*c-valor;
} 
int main(void) {
	int conta1;
	int conta2;
	int* conta;
	scanf("%d %d",&conta1,&conta2);
	if(conta1>conta2) {
		conta=&conta1;
	}
	else {
		conta=&conta2;
	}
	compra(conta,500);
	printf("%d %d\n",conta1,conta2);
	return 0;
}
