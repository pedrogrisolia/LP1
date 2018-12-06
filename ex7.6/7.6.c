#include <stdio.h>
union Classe {
	int magia;
	int forca;
};
struct Personagem {
	char nome[20];
	int dinheiro;
	union Classe c;
};
void preenche_p(struct Personagem* p) {
	scanf("%s %d",(*p).nome,&(*p).dinheiro);
}
void preenche_m(struct Personagem* p) {
	printf("Preencha os atributos do seu mago\n");
	preenche_p(p);
	scanf("%d",&(*p).c.magia);
}
void preenche_g(struct Personagem* p) {
	printf("Preencha os atributos do seu guerreiro\n");
	preenche_p(p);
	scanf("%d",&(*p).c.forca);
}
int main(void) {
	struct Personagem p1;
	int i;
	printf("Escolha sua classe:\n1-Guerreiro\n2-Mago\n");	
	scanf("%d",&i);
	if(i==1) {
		preenche_g(&p1);
	}
	else {
		preenche_m(&p1);
	}
}
	

