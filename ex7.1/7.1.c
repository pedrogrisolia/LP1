#include <stdio.h>
struct Personagem {
		int forca;
		int energia;
};
void preenche(struct Personagem*p1) {
	scanf("%d %d",&(*p1).forca,&(*p1).energia);
}
int main(void) {
	struct Personagem p1;
		p1.forca;
		p1.energia;
	preenche(&p1);
	printf("Força=%d, Energia=%d\n",p1.forca,p1.energia);
}
