#include <stdio.h>
#include <stdlib.h>

int main(){
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	float nota4 = 0;
	
	printf("Digite a primeiro nota para fazer a media:");
	scanf("%f", &nota1);
	printf("Digte a segunda nota para fazer a media:");
	scanf("%f", &nota2);
	printf("Digite a terceiro nota para fazer a media:");
	scanf("%f", &nota3);
	printf("Digte a quarta nota para fazer a media:");
	scanf("%f", &nota4);
	
	float total = (nota1+nota2+nota3+nota4)/4; 
	
	
	printf("Nota total: %f", total);
	
	return 0;		
}
