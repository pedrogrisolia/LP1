#include <stdio.h>
#include <string.h>
void escreva_string(FILE* f,char* str) {
	int j;
	for(j=0;j<strlen(str);j++) {
		fputc(str[j],f);
	}
}
int main(void) {
	int i,j;
	char str[25];
	FILE* f=fopen("/tmp/arq-1.txt","w");
	for(i=0;i<10;i++) {
		scanf("%s",str);
		escreva_string(f,str);
	}
	fclose(f);
}
		
