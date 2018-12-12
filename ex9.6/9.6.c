#include <stdio.h>
#include <stdlib.h>
typedef struct Caixa {
	int v;	
	struct Caixa* prox;
}Caixa;
int contem(Caixa* caixa,int valor) {
	while(caixa!=NULL) {
		if(caixa->v==valor) {
			return 1;
		}
		caixa=caixa->prox;
	}
	return 0;
}
int main(void) {
	int n;
	Caixa* cabeca=NULL;
	for(Caixa* ult;;) {
		scanf("%d",&n);
		if(n==-1) {
			break;
		}
		Caixa* c=(Caixa*)malloc(sizeof(Caixa));
		c->v=n;
		c->prox=NULL;
		if(cabeca==NULL) {
			cabeca=c;
		} else {
			ult->prox=c;
		}
		ult=c;
	}
	printf("%d\n",contem(cabeca,3));
}
