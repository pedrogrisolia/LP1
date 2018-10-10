#include <stdio.h>
void troca(int *p1,int *p2) {
	int a=*p1;
	int b=*p2;
	*p1=b;
	*p2=a;
	printf("%d %d\n",*p1,*p2);
}	
int main(void) {
	int x,y;
	scanf("%d %d",&x,&y);
	troca(&x,&y);
	return 0;
}
