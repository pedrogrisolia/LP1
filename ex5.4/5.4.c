#include <stdio.h>
void troca(int *p1,int *p2,int x,int y) {
	p1=&y;
	p2=&x;
	printf("%d %d\n",*p1,*p2);
}	
int main(void) {
	int x,y;
	int *p1,*p2;
	scanf("%d %d",&x,&y);
	p1=&x;
	p2=&y;
	troca(p1,p2,x,y);
	return 0;
}
