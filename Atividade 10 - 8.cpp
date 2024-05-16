#include <stdio.h>

int main() {
	float F = 0;
	
	
	printf("Escreva a temperatura em Fahrenheit e sera convertido em Celsius:");
	scanf("%f", &F);
	
	float C = (F - 32)/ 1.8;
	
	printf("a temperatura em celsius sera de %f", C);
	
	return 0;
}
