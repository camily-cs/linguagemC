#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aula 5-UC-9 Cálculo da média Versão2.0
	@author Camily Cruz */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	printf ("Cálculo de média\n");
	//Variáveis
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
	//Estruturas de controle para determinar a aprovação
	if (media <5){
			printf("Reprovado \n");
	}
	else {
			printf("Aprovado \n");
	}
	system("pause");
	return 0;
}
