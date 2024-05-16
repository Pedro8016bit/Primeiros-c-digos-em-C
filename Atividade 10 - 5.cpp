#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	
	printf("Escreva dois numeros inteiros.\n \"obs: o segundo dividira o primeiro\" \n");
	scanf("%i", &a);
	scanf("%i", &b);
	
	float divi = (a / b);
	
	printf("a divisao eh: %f", divi);
	return 0;
	
}
