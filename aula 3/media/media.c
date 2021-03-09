#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/* Aula 3-UC9 Cálculo de média
 	@author Camily Cruz*/

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"Portuguese");
	printf ("Cálculo de média\n");
	//váriaveis:
	float nota1,nota2,media;
	//ENTRADA:
	printf("digite a nota 1: ");
	scanf("%f",&nota1);
	printf("digite a nota 2: ");
	scanf("%f",&nota2);
	//PROCESSAMENTO:
	media = (nota1 + nota2)/2;
	//SAÍDA:
	printf("resultado: %.1f\n",media);
	system ("pause");
	return 0;
}
