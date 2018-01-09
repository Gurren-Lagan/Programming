#include <stdio.h>

/* 
	Fibonacci
	1,1,2,3,5,8
	fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
*/

int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}

		else{
			return(fibonacci(n-1)+fibonacci(n-2));
		}
}

int main(){
	int n,i;

	printf("Enter the number of elements: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		printf("%d ", fibonacci(i));
	}

	return 0;
}