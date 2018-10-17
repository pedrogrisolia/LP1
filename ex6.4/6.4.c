#include <stdio.h>
int strlen2(char* s) {
	int i;
	for(i=0;s[i]!=0;i++) {
	}
	return i;
}
void strjoin2(char* s,char* o1, char* o2) {
	int p,q;
	int i=0;
	for(p=0;o1[p]!=0;p++) {
		s[i]=o1[p];
		i++;
	}
	for(q=0;o2[q]!=0;q++) {
		s[i]=o2[q];
		i++;
	}
	s[i]=0;
}
int main(void) {
	char s[1000]="111111111111111111111111111111",o1[100],o2[100];
	scanf("%s",o1);
	scanf("%s",o2);
	strjoin2(s,o1,o2);
	printf("%s\n",s);
	printf("%d\n",strlen2(s));
	return 0;
}
