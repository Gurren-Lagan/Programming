//multiplying tables from 1 to 10 of whole numbers y GL
#include <stdio.h>

int main(){
  int n,i;

scanf("%d",&n);

  for(i=1;i<=10;i++){

    printf("%2d x %3d = %4d\n",i,n,(i*n));
  }
  
  return 0;
}
