#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
	int a,b,c,delta;
	float x1,x2;
	printf("Insira o valor de A, B e C: ");
	scanf("%d %d %d", &a,&b,&c);
	
	delta = (b*b)-4*a*c;
	printf("\nO valor de delta e: %d", delta);
	
	if(delta > 0){
	x1 = -b + (sqrt(delta))/(2*a);
	x2 = -b - (sqrt(delta))/(2*a);
	}else if(delta == 0){
		x1 = -b + (sqrt(delta))/(2*a);
	}else{
		printf("\nO valor de delta é negativo.");
	}
}
