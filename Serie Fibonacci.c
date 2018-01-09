#include <stdio.h>

// 1 1 2 3 5 8 13...

int main(){
	int n,i,aux1=0,aux2=1,aux3=1;

	printf("Ingresa el numero de elementos: ");
	scanf("%d",&n);

	printf("1 ");
	for(i=1;i<n;i++){ 
		aux3 = aux1 + aux2;
		aux1 = aux2;
		aux2 = aux3;

		printf(",%d ", aux3);
	}



	return 0;
}
