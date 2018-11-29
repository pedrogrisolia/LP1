#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
		preenche1(&v[j]);
	}
}
struct ponto maisdistante(struct ponto v[10]) {
	int j;
	float maisdistante=0.0;
	float formula;
	struct ponto maior;
	maior.x=0;
	maior.y=0;
	for(j=0;j<10;j++) {
		formula=sqrt(pow(v[j].x,2.0)+pow(v[j].y,2.0));
		if(formula>maisdistante) {
			maisdistante=formula;
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
	struct ponto p=maisdistante(v);
	printf("\n(%d,%d)\n",p.x,p.y);
}
