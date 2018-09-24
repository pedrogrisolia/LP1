#include <stdio.h>
int todos_os_primos(int max) {
	int i,c;
	char primo=1;
	for(i=2;i<=max;i++) {
		c=2;
		while(c<i) {
			if(i%c==0) {
				primo=0;
				break;
			}
			else {
				primo=1;
				c++;
			}
		}
		if(primo==1) {
			printf("%d\n",i);
		}
	}
	return 0;
}		
int main(void) {
	int max;
	scanf("%d",&max);
	todos_os_primos(max);
	return 0;
}
