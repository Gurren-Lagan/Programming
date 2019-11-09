//Raising whole numbers to a power by GL
#include <stdio.h>

int main(){
  int n,p,i,powr=1;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("Enter the power: ");
  scanf("%d",&p);
  for(i=0;i<p;i++){
    powr*=n;
  }
  printf("%d\n",powr);
  
  return 0;
}
