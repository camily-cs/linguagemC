#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/* aula 1-UC9 - fundamentos da linguagem C
 	@author Camily Cruz */

int main(int argc, char *argv[]) {
	//A linha abaixo configura o idioma para PT-BR
	setlocale(LC_ALL, "Portuguese");
	//Abaixo modificamos a cor do cmd,sendo 1�fundo e 2�texto
	//cor de fundo:
	system("color 5F");
	printf("Ol� mundo\n");
	printf("Camily Cruz\n");
	//Na linha abaixo demos uma pausa no cmd
	system("pause");
	//Na linha abaixo limpamos a tela do cmd
	system("cls");
	//cor do texto:
	system("color D");
	//abaixo mostramos mais op��es de comandos de cores
	printf("C�digo de cores:\n\n");
	printf("0 - preto\n");
	printf("1 - azul\n");
	printf("2 - verde\n");
	printf("3 - azul claro\n");
	printf("4 - vermelho\n");
	printf("5 - roxo\n");
	printf("6 - amarelo\n");
	printf("7 - branco\n");
	printf("8 - cinza\n");
	printf("9 - azul claro\n");
	printf("A - verde claro\n");
	printf("B - verde �gua claro\n");
	printf("C - vermelho claro\n");
	printf("D - lil�s\n");
	printf("E - amarelo\n");
	printf("F - branco brilhante\n");
	system("pause");
	return 0;
}
