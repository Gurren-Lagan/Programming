#include <stdio.h>
//even or odd with functions

int evenORodd(int n){
	if(n%2!=0){
		return 0;
	}

	return 1;
}

int main(){
	int n; 

	printf("Type a integer number: ");
	scanf("%d",&n);

	if(evenORodd(n)){
		printf("The number %d is even\n",n);
	}

	else 
		printf("The number %d is odd\n",n);

	return 0;
}