#include <stdio.h>
#include <stdlib.h>

int main(){
	float md1,md2,n1,n2,n3,n4,n5,ne;
	printf("Digite os valores das 4 notas: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	md1 = (n1 + n2 + n3 + n4) / 4;
	
	if(md1 < 7.00){
		printf("\nO aluno ficou de recuperacao\n");
		printf("\nInsira a nota do exame: ");
		scanf("%f", &ne);
		md2 = (md1 + ne) / 2;
		if(md2 >= 5){
			printf("O aluno esta aprovado");
		}else{
			printf("O aluno esta reprovado");
		}
	}else{
		printf("Aprovado");
	}
	return 0;
}
