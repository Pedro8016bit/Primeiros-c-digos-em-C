#include <stdio.h>

int main() {
	float kg = 0;
	float g = 1000;
	
	printf("escreva o seu peso em kg");
	scanf("%f", &kg);
	
	printf("seu peso em gramas %f", g * kg);
	
	return 0;
}
