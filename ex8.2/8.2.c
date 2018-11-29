#include <stdio.h>
#include <string.h>
int main(void) {
	char str[25];
	int i=0;
	FILE* f=fopen("/tmp/arq-1.txt","r");
	while(str[i]!=EOF) {
		str[i]=fgetc(f);
		i++;
	}
	str[i+1]='\0';
	fclose(f);
	printf("%s\n",str);
}
		
