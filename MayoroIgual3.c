#include <stdio.h>

int main(){

  int a,b,c;

    printf("Ingresa A: ");
    scanf("%d",&a);
    printf("Ingresa B: ");
    scanf("%d",&b);
    printf("Ingresa C: ");
    scanf("%d",&c);

      if(a==b && b==c)
        printf("Los tres son iguales\n");

     else if(a==b && b!=c && c>a)
          printf("A y B son iguales, C es el mayor\n");
          else if(a==b && b!=c && c<a)
            printf("A y B son iguales, C es el menor\n");


        else  if (b==c && c!=a && a>c)
            printf("B y C son iguales, A es el mayor\n");
            else if (b==c && c!=a && a<c)
              printf("B y C son iguales, A es el menor\n");


              else  if (a==c && c!=b && b>c)
                printf("A y C son iguales, B es el mayor\n");
                else if (a==c && c!=b && b<c)
                  printf("A y C son iguales, B es el menor\n");


            else if(a>b && a>c)
          printf("A es el mayor\n");

            else if(b>a && b>c)
          printf("B es el mayor\n");

          else if(c>a && c>b)
          printf("C es el mayor\n");

        return 0;
}
