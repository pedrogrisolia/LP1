#include <stdio.h>
int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	int* p;
	if(a>b) {
		p=&a;	
	}
	else {
		p=&b;
	}
	*p=*p-50;
	printf("%d %d\n",a,b);
	return 0;
}
