#include <stdio.h>
struct Atributos {
	int vida;
	int energia;
	char nome[20];
};
union Classe {
	int magia;
	int agilidade;	
	int forca;
struct Personagem {
	struct Atributos p;
	union Classe c;
};
int main(void) {
	struct Personagem p1;
	char i;
	printf("Preencha seu nome, vida e energia.\n");
	scanf("%s %d %d",p1.p.nome,&p1.p.vida,&p1.p.energia);
	printf("Escolha o tipo do personagem:\n1-Mago\n2-Arqueiro\n3-Guerreiro\n");
	scanf("%hhd",&i);
	if(i==1) {
		scanf("%d",&p1.c.magia);
		printf("Nome:%s\nVida:%d\nEnergia:%d\nMagia:%d\n",p1.p.nome,p1.p.vida,p1.p.energia,p1.c.magia);
	}
	else {
		if(i==2) {
			scanf("%d",&p1.c.agilidade);
			printf("Nome:%s\nVida:%d\nEnergia:%d\nAgilidade:%d\n",p1.p.nome,p1.p.vida,p1.p.energia,p1.c.agilidade);
		}
		else {
			if(i==3) {
				scanf("%d",&p1.c.forca);
				printf("Nome:%s\nVida:%d\nEnergia:%d\nForça:%d\n",p1.p.nome,p1.p.vida,p1.p.energia,p1.c.forca);
			}
		}
	}
	
}
	
	

