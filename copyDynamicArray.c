#include <stdio.h>
#include <stdlib.h> //for can use malloc and dinamic memory stuffs

/*
	Simple example, I'm new with the language so I can make some mistakes, but I hope it works for you ;) cheers.
*/
void copyArray(int *a, int n){
	int *b,i;
	b = malloc(n* sizeof(int));
		if(a==NULL){printf("No memory available");}

	//We copied
	for(i=0;i<n;i++){
		b[i]=a[i];
	}

	printf("Copying array...\n\n");
	printf("Elements of Array 2 (Copy) are: \n");
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	printf("\n");

}

int main(){

	int *a,n,i;
	printf("Number of array elements: ");
	scanf("%d", &n);

		// memory reserve
		a = malloc(n * sizeof(int));

			if(a==NULL){printf("No memory available");}

	//we read the original array		
	for(i=0;i<n;i++){
		printf("Enter the element [%d]: ",i);
		scanf("%d",&a[i]);
	}

	//we print the original array
	printf("\nElements of Array 1 (Original) are: \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}

	printf("\n\n");

	copyArray(a,n);

	return 0;
}