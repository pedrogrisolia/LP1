#include <stdio.h>
int main(void) {
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	if(a>b) {
		int* p=&a;
		*p=*p-50;
	}
	else {
		int* p=&b;
		*p=*p-50;
	}
	printf("%d %d\n",a,b);
	return 0;
}
