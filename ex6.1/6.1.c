#include <stdio.h>
void preenche(int n, int* vec) {
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",&vec[i]);
	}
}
float media(int n, int* vec) {
	int soma,x;
	float med;
	for(x=0;x<n;x++) {
		soma=soma+vec[x];
	}
	med=soma/n;
	printf("Média: %f\n",med);
	return 0;
}
int main(void) {
	int n;
	int vec[100];
	printf("Digite N: ");
	scanf("%d",&n);
	preenche(n,vec);
	media(n,vec);
	return 0;
}
