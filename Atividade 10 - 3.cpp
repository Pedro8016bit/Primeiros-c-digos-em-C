#include <stdio.h>

int main() {
	float altura = 0;
	float base = 0;
	
	printf("escreva a base do quadrado:");
	scanf("%f", &base);
	printf("escreva a altura do quadrado");
	scanf("%f", &altura);
	
	float area = (base * altura);
	
	printf("a area eh %f", area);
	
	return 0;
}
