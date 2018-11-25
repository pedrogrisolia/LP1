#include <stdio.h>
#include <stdlib.h>
struct ponto {
	int x;
	int y;
};
void preenche1(struct ponto*a) {
	scanf("%d %d",&(*a).x,&(*a).y);
}
void preenchevetor(struct ponto v[10]) {
	int j=0;
	for(j;j<10;j++) {
		scanf("%d %d",&(v[j]).x,&(v[j]).y);
	}
}
struct ponto maisdistante(struct ponto v[10]) {
	int j;
	int maiorponto=0;
	struct ponto maior;
	maior.x=0;
	maior.y=0;
	for(j=0;j<10;j++) {
		if(v[j].x+v[j].y>maiorponto) {
			maiorponto=v[j].x+v[j].y;
			maior=v[j];
		}
	}
	return maior;
}
int main() {
	int i=0;
	struct ponto a;
	struct ponto v[10];
	preenche1(&a);
	printf("(%d,%d)\n",a.x,a.y);
	preenchevetor(v);
	for(i;i<10;i++) {
		printf("(%d,%d) ",v[i].x,v[i].y);
	}
	printf("\n(%d,%d)\n",maisdistante(v).x,maisdistante(v).y);
}
