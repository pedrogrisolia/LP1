#include <stdio.h>
void hh(char s[100000]) {
	int i;
	for(i=0;i<100000;i++) {
		if(s[i]==0) {
			break;
		}
	}
	printf("%d\n",i);
}
int main(void) {
	char s[100000];
	scanf("%s",s);
	hh(s);
	return 0;
}

