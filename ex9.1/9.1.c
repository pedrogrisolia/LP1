#include <stdio.h>
int main(void) {
	int max=5;
	int vet[max];
	int j;
	int i;
	for(j=0;j<max;j++) {
		scanf("%d",&vet[j]);
	}
	for(j=0;j<max;j++) {
		printf("%d ",vet[j]);
	}
	printf("\n");
	scanf("%d",&i);
	for(j=i;j<max-1;j++) {
		vet[j]=vet[j+1];
	}
	max--;
	for(j=0;j<max;j++) {
		printf("%d ",vet[j]);
	}
	printf("\n");
}
