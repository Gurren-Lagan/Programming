#include <stdio.h>

int main(){
	int n,u,d,c,m;

	printf("Enter the number: ");
	scanf("%d",&n);

	u = n%10; //unidades
	n = n/10;
	d = n%10; //decenas
	n = n/10;
	c = n%10; //centenas
	n = n/10;
	m = n%10; //millares
	n = n/10; 

	switch(m){
		case 1: printf("M"); break;
		case 2: printf("MM"); break;
		case 3: printf("MMM"); break;
	}

	switch(c){
		case 1: printf("C"); break;
		case 2: printf("CC"); break;
		case 3: printf("CCC"); break;
		case 4: printf("CD"); break;
		case 5: printf("D"); break;
		case 6: printf("DC"); break;
		case 7: printf("DCC"); break;
		case 8: printf("DCCC"); break;
		case 9: printf("CM"); break;
	}

	switch(d){
		case 1: printf("X"); break;
		case 2: printf("XX"); break;
		case 3: printf("XXX"); break;
		case 4: printf("XL"); break;
		case 5: printf("L"); break;
		case 6: printf("LX"); break;
		case 7: printf("LXX"); break;
		case 8: printf("LXXX"); break;
		case 9: printf("XC"); break;
	}

	switch(u){
		case 1: printf("I"); break;
		case 2: printf("II"); break;
		case 3: printf("III"); break;
		case 4: printf("IV"); break;
		case 5: printf("V"); break;
		case 6: printf("VI"); break;
		case 7: printf("VII"); break;
		case 8: printf("VIII"); break;
		case 9: printf("IV"); break;
	}

	return 0;
}