#include <stdio.h>
#include <string.h>
int main(void) {
	char str[25];
	int i;
	scanf("%s",str);
	FILE* f =fopen("/tmp/arq-1.txt","w");
	for(i=0;i<strlen(str);i++) {
		fputc(str[i],f);
	}
	fclose(f);
}
