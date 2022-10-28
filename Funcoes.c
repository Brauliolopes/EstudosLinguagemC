#include<stdio.h>
#include<stdlib.h>
#include"Matematica.h"
#include<math.h>
/*   

1. Criar uma biblioteca com o nome que quiser e colocar as funções que forem criadas nela;
2. Criar uma função para calcular o raio de um circulo
3. Com o raio em mãos, criar uma função para calucalr a area desse mesmo circulo.

*/

int main (void)

{
	
	float diametro, raio, area;

	printf("informe o diametro para se calcular o raio de um circulo: \n"); // "Imprimir na tela"
	scanf("%f", &diametro); // Para pessoa digitar "Digite"
	raio = raiocirculo(diametro);
	printf("O raio do circulo e = \n%.2f\n", raio);
	area = areacirculo(raio);
	printf("Area do circulo e = \n%.2f\n", area);

	float raiz = sqrt(diametro);
	printf("A raiz quadrada do diametro e: %f", raiz);
	system("pause");
	return 0;
}