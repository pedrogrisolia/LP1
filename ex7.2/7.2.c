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

void preenche(struct Personagem*p) {
	scanf("%d %d",&(*p).forca,&(*p).energia);
}
void preenche2(struct Jogador*j) {
	scanf("%d",&(*j).dinheiro);
	scanf("%s",(*j).nome);
	preenche(&(*j).p);
}
int main(void) {
	struct Jogador j1;
	preenche2(&j1);
	printf("Nome:%s\nDinheiro:%d\nForça do personagem:%d\nEnergia do personagem:%d\n",j1.nome,j1.dinheiro,j1.p.forca,j1.p.energia);
}
	
