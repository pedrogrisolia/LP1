#include <stdio.h>
struct Caixa {
	int v;
	struct Caixa* prox;
};
void exibe(struct Caixa* caixa) {
	while(caixa->prox!=NULL) {
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
	struct Caixa* lista=&c[0];
	exibe(lista);
	
}
