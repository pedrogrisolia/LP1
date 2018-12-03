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
void preenche_mago(union Classe* c) {
	scanf("%s",(*c).Mago.m.nome);
	scanf("%d %d",&(*c).Mago.magia,&(*c).Mago.m.dinheiro);
}
int main(void) {
	union Classe c1;
	preenche_mago(&c1);
	FILE* f=fopen("arq.bin","wb");
	fwrite(&c1,sizeof(union Classe),1,f);
	fclose(f);
}
