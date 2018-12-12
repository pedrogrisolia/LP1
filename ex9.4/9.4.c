#include <stdio.h>
typedef struct Caixa {
	int v;
	struct Caixa* prox;
}Caixa;
void exibe(Caixa* caixa) {
	while(caixa!=NULL) {
		printf("%d ",caixa->v);
		caixa=caixa->prox;
	}
	printf("\n");
}
int main(void) {
	struct Caixa c[5];
	c[0].v=1;
	c[0].prox=&c[1];
	c[1].v=3;
	c[1].prox=&c[2];
	c[2].v=5;
	c[2].prox=&c[3];
	c[3].v=7;
	c[3].prox=&c[4];
	c[4].v=9;
	c[4].prox=NULL;
	Caixa* cabeca=&c[0];
	c[2].prox=NULL;
	c[1].prox=&c[3];
	exibe(cabeca);
	c[2].prox=&c[0];
	cabeca=&c[2];	
	exibe(cabeca);
	
}
