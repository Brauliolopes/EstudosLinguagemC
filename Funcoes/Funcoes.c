#include<stdio.h>
#include<stdlib.h>
#include"Matematica.h"
#include<math.h>

int main (void)

{
	float diametro, raio, area;

	printf("informe o diametro para se calcular o raio de um circulo: \n");
	scanf("%f", &diametro);

	raio = raioCirculo(diametro);

	printf("O raio do circulo e = \n%.2f\n", raio);

	area = areaCirculo(raio);

	printf("Area do circulo e = \n%.2f\n", area);

	float raiz = sqrt(diametro);

	printf("A raiz quadrada do diametro e: %f", raiz);

	system("pause");
	return 0;
}
