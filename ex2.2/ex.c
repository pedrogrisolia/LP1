#include <stdio.h>

int main (void) {
	int n1, n2;
	printf("Digite n1: ");
	scanf("%d",&n1);
	printf("Digite n2: ");
	scanf("%d",&n2);
	if (n1<n2) {
		while (n1<n2-1) {
			n1++;
			printf("%d\n",n1);
		}
	}
	else {
		if (n2<n1) {
			while (n2<n1-1) {
				n2++;
				printf("%d\n",n2);
			}
		}
	}
	return 0;
}
