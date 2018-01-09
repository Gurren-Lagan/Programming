#include <stdio.h>

int main(){
	int i,n,fac=1; // en 1 por la multiplicacion por 0 :v

	printf("Ingresa el numero para calcular el factorial: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		fac = fac * i;
	}

	printf("El factorial de %d es: %d\n",n,fac);
}