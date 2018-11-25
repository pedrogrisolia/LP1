#include <stdio.h>
struct posicao {
	int x;
	int y;
};
struct personagem {
	int identidade;
	struct posicao p;
	int pontuacao;
};
int main() {
	struct personagem v[10];
	int i;
	for(i=0;i<10;i++) {
		printf("Identidade: ");
		scanf("%d",&v[i].identidade);
		printf("Pontuação: ");
		scanf("%d",&v[i].pontuacao);
		printf("Posição: ");
		scanf("%d %d",&v[i].p.x,&v[i].p.y);
	}
}

