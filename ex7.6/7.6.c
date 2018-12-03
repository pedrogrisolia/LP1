#include <stdio.h>
struct Personagem {
	char nome[20];
	int dinheiro;
};
union Classe {
	struct {
		int magia;
		struct Personagem m;
	} Mago;
	struct {
		int forca;
		struct Personagem g;
	} Guerreiro;
};
void preenche_m(union Classe* c) {
	printf("Preencha os atributos do seu mago\n");
	scanf("%s",(*c).Mago.m.nome);
	scanf("%d %d",&(*c).Mago.magia,&(*c).Mago.m.dinheiro);
}
void preenche_g(union Classe* c) {
	printf("Preencha os atributos do seu guerreiro\n");
	scanf("%s",(*c).Guerreiro.g.nome);
	scanf("%d %d",&(*c).Guerreiro.forca,&(*c).Guerreiro.g.dinheiro);
}
int main(void) {
	union Classe c1;
	int i;
	printf("Escolha sua classe:\n1-Guerreiro\n2-Mago\n");	
	scanf("%d",&i);
	if(i==1) {
		preenche_g(&c1);
	}
	else {
		preenche_m(&c1);
	}
}
	

