#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aula 5-UC-9 C�lculo da m�dia Vers�o2.0
	@author Camily Cruz */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	printf ("C�lculo de m�dia\n");
	//Vari�veis
	float nota1,nota2,media;
	//ENTRADA:
	printf("digite a nota 1: ");
	scanf("%f",&nota1);
	printf("digite a nota 2: ");
	scanf("%f",&nota2);
	//PROCESSAMENTO:
	media = (nota1 + nota2)/2;
	//SA�DA:
	printf("resultado: %.1f\n",media);
	//Estruturas de controle para determinar a aprova��o
	if (media <5){
			printf("Reprovado \n");
	}
	else {
			printf("Aprovado \n");
	}
	system("pause");
	return 0;
}
