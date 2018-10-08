#include <stdio.h>
void compra(int* c, int valor) {
	*c=*c-valor;
} 
int main(void) {
	int conta1,conta2,v;
	int* conta;
	char i;
	int compras[]={100,50,80,30,20};
	scanf("%d %d",&conta1,&conta2);
	for(i=0;i<5;i++) {
		v=compras[i];
		if(conta1>conta2) {
			conta=&conta1;
		}
		else {
			conta=&conta2;
		}
		compra(conta,v);
		printf("%d %d\n",conta1,conta2);
	}
	return 0;
}
