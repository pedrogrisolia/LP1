#include <stdio.h>
void preenche(int arr[100][100],int l,int c) {
	int i,j;
	for(i=0;i<l;i++) {
		for(j=0;j<c;j++) {
			printf("arr[%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}
float media(int arr[100][100],int l,int c) {
	int m,n,soma=0;
	float med;
	for(m=0;m<l;m++) {
		for(n=0;n<c;n++) {
			soma=soma+arr[m][n];
		}
	}
	med=soma/(l*c);
	printf("Média: %.2f\n",med);
	return 0;
}
int main(void) {
	int arr[100][100],l,c;
	printf("Digite L: ");
	scanf("%d",&l);
	printf("Digite C: ");
	scanf("%d",&c);
	preenche(arr,l,c);
	media(arr,l,c);
	return 0;
}
	
