#include <stdio.h>
#include <string.h>

int main (void) {
	char time[100], maior[100], menor[100];
	int v, e, d, t=1, pt, M=0, m=999;
	while (t<=20) {
		printf("Digite o nome do time: ");
		scanf("%s",time);
		printf("Digite o numero de vitorias: ");
		scanf("%d",&v);
		printf("Digite o numero de empates: ");
		scanf("%d",&e);
		printf("Digite o numero de derrotas: ");
		scanf("%d",&d);
		pt=(v*3)+e;
		if(pt>M) {
			strcpy(maior,time);
			M=pt;
			
		}
		if(pt<m) {
			strcpy(menor,time);
			m=pt;
			
		}	
		t++;	
	}
	printf("%s tem %d pontos e é o time com mais pontos.\n",maior,M);
	printf("%s tem %d pontos e é o time com menos pontos.\n",menor,m);
	return 0;
}
	
	
