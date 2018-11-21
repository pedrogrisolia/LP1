#include <stdio.h>
struct Atributos {
	int vida;
	int energia;
};
union Personagem {
	struct {
		int magia;
		char nome[20];
		struct Atributos m;
	} Mago;
	struct {
		int agilidade;
		char nome[20];
		struct Atributos a;
	} Arqueiro;	
	struct {
		int forca;
		char nome[20];
		struct Atributos g;
	} Guerreiro;
};
int main(void) {
	union Personagem p1;
	char i;
	printf("Escolha o tipo do personagem:\n1-Mago\n2-Arqueiro\n3-Guerreiro\n");
	scanf("%hhd",&i);
	if(i==1) {
		scanf("%s %d",p1.Mago.nome,&p1.Mago.magia);
		scanf("%d %d",&p1.Mago.m.vida,&p1.Mago.m.energia);
		printf("Nome:%s\nVida:%d\nEnergia:%d\nMagia:%d\n",p1.Mago.nome,p1.Mago.m.vida,p1.Mago.m.energia,p1.Mago.magia);
	}
	else {
		if(i==2) {
			scanf("%s %d",p1.Arqueiro.nome,&p1.Arqueiro.agilidade);
			scanf("%d %d",&p1.Arqueiro.a.vida,&p1.Arqueiro.a.energia);
			printf("Nome:%s\nVida:%d\nEnergia:%d\nAgilidade:%d\n",p1.Arqueiro.nome,p1.Arqueiro.a.vida,p1.Arqueiro.a.energia,p1.Arqueiro.agilidade);
		}
		else {
			if(i==3) {
				scanf("%s %d",p1.Guerreiro.nome,&p1.Guerreiro.forca);
				scanf("%d %d",&p1.Guerreiro.g.vida,&p1.Guerreiro.g.energia);
				printf("Nome:%s\nVida:%d\nEnergia:%d\nForça:%d\n",p1.Guerreiro.nome,p1.Guerreiro.g.vida,p1.Guerreiro.g.energia,p1.Guerreiro.forca);
			}
		}
	}
	
}
	
	
