#include <stdio.h>
#include <stdlib.h>
typedef struct Caixa {
	int v;	
	struct Caixa* prox;
	struct Caixa* ant;
	
}Caixa;
int contem(Caixa* caixa,int valor) {
	int pos=0;
	while(caixa!=NULL) {
		if(caixa->v==valor) {
			return pos+1;
		}
		caixa=caixa->prox;
		pos++;
	}
	return 0;
}
int retira(Caixa* caixa,int valor) {
	int pos=contem(caixa,valor);
	if(pos==0) {
		return 0;
	}
	if(pos==1) {
		Caixa* ant=caixa->ant;
		*caixa=*caixa->prox;
		caixa->ant=ant;
		return 0;
	}
	int i;
	for(i=0;i<pos-2;i++) {
		caixa=caixa->prox;
	}
	if(caixa->prox==NULL) {		
		caixa->ant->prox=NULL;
	} else {
		caixa->prox=caixa->prox->prox;
	}
}
void exibe(Caixa* caixa) {
	while(caixa!=NULL) {
		printf("%d ",caixa->v);
		caixa=caixa->prox;
	}
	printf("\n");
}
		
int main(void) {
	int n,remove;
	Caixa* cabeca=NULL;
	Caixa* ante;
	Caixa* ult;
	for(;;) {
		scanf("%d",&n);
		if(n==-1) {
			break;
		}
		Caixa* c=(Caixa*)malloc(sizeof(Caixa));
		c->v=n;
		c->prox=NULL;
		if(cabeca==NULL) {
			c->ant=NULL;
			cabeca=c;
		} else {
			c->ant=ante;
			ult->prox=c;
		}
		ult=c;
		ante=ult;
	}
	cabeca->ant=ult;
	printf("Digite o valor a ser removido\n");
	scanf("%d",&remove);
	if(contem(cabeca,remove)!=0) {
		printf("Valor existe.\n");
	} else {
		printf("Valor não existe.\n");
		return 0;
	}
	retira(cabeca,remove);
	exibe(cabeca);
}
