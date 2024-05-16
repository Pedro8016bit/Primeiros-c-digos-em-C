#include <stdio.h>
#include <math.h>

int main() {
	float raio, diametro, circunferencia, area;
	scanf("%f", &raio);

	area          = 3.14 * powf(raio, 2);
	diametro      = raio*2;
	circunferencia = 3.14 * diametro;

	printf("Raio: %f\n", raio);
	printf("Diametro: %f\n", diametro);
	printf("Circumferencia: %f\n", circunferencia);
	printf("Area: %f\n", area);

	return 0;
}



