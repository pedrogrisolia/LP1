#include <stdio.h>
struct Personagem {
	int forca;
	int energia;
};
struct Jogador {
	int dinheiro;
	char nome[20];
	struct Personagem p;
};

void preenche(struct Jogador*p1) {
	scanf("%d %d",&(*p1).p.forca,&(*p1).p.energia);
}
void preenche2(struct Jogador*p1) {
	scanf("%d",&(*p1).dinheiro);
	scanf("%s",(*p1).nome);
	preenche(p1);
}
int main(void) {
	struct Jogador p1;
	preenche2(&p1);
	printf("Nome:%s\nDinheiro:%d\nForça do personagem:%d\nEnergia do personagem%d\n",p1.nome,p1.dinheiro,p1.p.forca,p1.p.energia);
}
	
