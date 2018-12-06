#include <stdio.h>
void troca(int *p1,int *p2) {
	int temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("%d %d\n",*p1,*p2);
}	
int main(void) {
	int x,y;
	scanf("%d %d",&x,&y);
	troca(&x,&y);
	return 0;
}
