#include <stdio.h>
#include <string.h>
int main(void) {
	int i,j;
	char str[25];
	FILE* f=fopen("/tmp/arq-1.txt","w");
	for(i=0;i<10;i++) {
		scanf("%s",str);
		for(j=0;j<strlen(str);j++) {
			fputc(str[j],f);
		}
	}
	fclose(f);
}
		
