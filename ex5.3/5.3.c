#include <stdio.h>
int compra(int* contama,int* contame,int compras[]) {
	char i;
	printf("\n%d %d\n",*contama,*contame);
	for(i=0;i<5;i++) {
		*contama=*contama-compras[i];
		printf("%d %d\n",*contama,*contame);
	}
	return 0;
}	
	
int main(void) {
	int conta1;
	int conta2;
	int compras[]={100,50,80,30,20};
	int* contama;
	int* contame;
	scanf("%d %d",&conta1,&conta2);
	if(conta1>conta2) {
		contama=&conta1;
		contame=&conta2;
	}
	else {
		contama=&conta2;
		contame=&conta1;
	}
	compra(contama,contame,compras);
	return 0;
}
	
