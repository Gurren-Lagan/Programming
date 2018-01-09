#include <stdio.h>
//factorial recursivo
//4! = 4*3*2*1
/*
4! = 4*3!;
3!=3*2!
2!=2*1!
1! =1 //CASO BASE
*/
long factorial(int n){
	if(n<=1){
		return n;
	}

		else{
			return (n * factorial(n-1));
		}
}

int main(){
	int n;

	printf("Ingresa un numero: ");
	scanf("%d",&n);

	printf("El factorial de %d es: %d\n",n,factorial(n));

	return 0;
}