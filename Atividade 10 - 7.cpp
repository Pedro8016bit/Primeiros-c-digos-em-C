#include <stdio.h>

int main() {
	
	float kg = 0;
	float prato = 45.00;
	
	printf("Digite o peso do prato em kg:");
	scanf("%f", &kg);
	
	float total_pago = (kg * prato);
	
	printf("o total a ser pago é: %f", total_pago);
	
	return 0;
	
}
