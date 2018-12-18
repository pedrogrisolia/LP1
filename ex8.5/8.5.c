#include <stdio.h>
#include <string.h>
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
 	union Classe le;
	preenche_mago(&c1);
	FILE* f=fopen("arq.bin","wb");
	fwrite(c1.Mago.m.nome,sizeof(char),strlen(c1.Mago.m.nome),f);
	fwrite(&c1.Mago.magia,sizeof(int),1,f);
	fwrite(&c1.Mago.m.dinheiro,sizeof(int),1,f);	
	fclose(f);
 	FILE* a=fopen("arq.bin","rb");
 	fread(le.Mago.m.nome,sizeof(char),strlen(c1.Mago.m.nome),a);
	le.Mago.m.nome[strlen(c1.Mago.m.nome)]='\0';
	fread(&le.Mago.magia,sizeof(int),1,a);
	fread(&le.Mago.m.dinheiro,sizeof(int),1,a);
 	fclose(a);
 	printf("%s %d %d\n",le.Mago.m.nome,le.Mago.magia,le.Mago.m.dinheiro);


}
