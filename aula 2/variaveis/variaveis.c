#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/* aula 2-UC9 vari�veis 
	@author Camily Cruz*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	//tipos de vari�veis
	//abaixo [30] significa que a vari�vel char ir� armazenar apenas 30 caracteres. OBS:mas isso pode ser alterado para a qtde de caracteres que for necess�rio.
	char professor[35] = {"Camily Cruz"};
	char personalTrainer ='s';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("ACADEMIA PHISICAL\n");
	printf("_________________\n");
	//%s -> serve para ler o tipo de vari�vel,no caso,esta � a vari�vel char[]
	// , -> a v�rgula serve para concatenar(unir) um texto ao conte�do da vari�vel
	printf("Professor:%s\n", professor);
	printf("Personal Trainer(s/n):%c\n",personalTrainer);
	printf("Per�odo: %d\n", periodo);
	// .N�MERO antes do tipo da vari�vel arredonda o n�mero para a qtde de casa decimal determinada
	//no caso abaixo, na vari�vel float, o n�mero foi arredondado para 1 casa decimal
	printf("Carga hor�ria semanal:%.1f\n", cargaHoraria);
	//no caso abaixo, na vari�vel double, o n�mero foi arredondado para 2 casas decimais
	printf("Sal�rio: R$ %.2lf\n",salario);
	printf("_________________\n");
	system("pause");
	system("cls");
	//ENTRADA DE DADOS
	//1� Criando vari�veis sem valor definido, para que o cliente possa atribuir esses valores:
	char aluno[50];
	char sexo;
	int idade;
	//abaixo usamos uma �nica vari�vel para colocar mais de um dado, pois para ambos dados usamos essa mesma vari�vel, e assim iremos economizar mem�ria
	float peso, altura;
	//2� Criando o cadastro do aluno e possibilitando que o cliente consiga atribuir valores as vari�veis, ou seja, o cliente conseguir� inserir dados no app
	//OBS: char[]=gets       outras vari�veis=scanf
	printf("CADASTRO DE ALUNO \n\n");
	printf("nome do aluno: ");
	//gets-usado para o cliente conseguir inserir os dados no app. S� funciona na vari�vel char[]
	gets(aluno);
	//scanf-usado para  cliente inserir os dados no app. Funciona nas vari�veis char, int, float e double
	//Em scanf, quando o cliente for inserir dados com n�meros decimais coloca-se (,) e n�o (.)    EX: altura: 1,70
	//&-usado antes do nome dado a vari�vel apenas quando se usa scanf
	printf("sexo (M/F): ");
	scanf("%c",&sexo);
	printf("idade: ");
	scanf("%d", &idade);
	printf("Peso(kg): ");
	scanf("%f", &peso);
	printf("altura(m): ");
	scanf("%f", &altura);
	printf("\n");
	system("pause");
	system("cls");
	printf("Ficha do aluno(a): \n");
	printf("_______________________\n");
	printf("aluno: %s\n", aluno);
	printf("sexo: %c\n", sexo);
	printf("idade: %d\n", idade);
	//abaixo usamos (,) ap�s a vari�vel peso para acrescentar outro texto
	printf("peso: %.2f\n", peso, "kg");
	printf("altura: %.2f", altura, "metros");
	printf("\n");
	printf("____________");
	system("pause");
	return 0;
}

