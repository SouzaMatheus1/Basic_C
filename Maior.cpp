#include <stdio.h>
#include <stdlib.h>
#define tam 3

int main(){
	int lista[3],i,aux;
	
	printf("Digite o valor de A, B e C: ");
	scanf("%d %d %d", &lista[0],&lista[1],&lista[2]);
	
	for(i = 0; i < tam-1; i++){
		if(lista[i] > lista[i+1]){
			aux = lista[i];
			lista[i] = lista[i+1];
			lista[i+1] = aux;
		}
	}
	for(i = 0; i < tam-1; i++){
	if(lista[i] > lista[i+1]){
		aux = lista[i];
		lista[i] = lista[i+1];
		lista[i+1] = aux;
		}
	}
printf("%d %d %d", lista[0], lista[1], lista[2]);
}
