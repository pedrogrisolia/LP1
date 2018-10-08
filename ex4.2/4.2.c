#include <stdio.h>
int eh_primo(int n) {
	int x;
	for(x=2;x<n;x++) {
		if(n%x==0) {
			return 0;
		}
	}
	return 1;
}
int todos_os_primos(int max) {
	int i,c,r;
	char primo=1;
	for(i=2;i<=max;i++) {
		eh_primo(i);
		r=eh_primo(i);
		if(r==1) {
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
