#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/* aula 2-UC9 variáveis 
	@author Camily Cruz*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	//tipos de variáveis
	//abaixo [30] significa que a variável char irá armazenar apenas 30 caracteres. OBS:mas isso pode ser alterado para a qtde de caracteres que for necessário.
	char professor[35] = {"Camily Cruz"};
	char personalTrainer ='s';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("ACADEMIA PHISICAL\n");
	printf("_________________\n");
	//%s -> serve para ler o tipo de variável,no caso,esta é a variável char[]
	// , -> a vírgula serve para concatenar(unir) um texto ao conteúdo da variável
	printf("Professor:%s\n", professor);
	printf("Personal Trainer(s/n):%c\n",personalTrainer);
	printf("Período: %d\n", periodo);
	// .NÚMERO antes do tipo da variável arredonda o número para a qtde de casa decimal determinada
	//no caso abaixo, na variável float, o número foi arredondado para 1 casa decimal
	printf("Carga horária semanal:%.1f\n", cargaHoraria);
	//no caso abaixo, na variável double, o número foi arredondado para 2 casas decimais
	printf("Salário: R$ %.2lf\n",salario);
	printf("_________________\n");
	system("pause");
	system("cls");
	//ENTRADA DE DADOS
	//1º Criando variáveis sem valor definido, para que o cliente possa atribuir esses valores:
	char aluno[50];
	char sexo;
	int idade;
	//abaixo usamos uma única variável para colocar mais de um dado, pois para ambos dados usamos essa mesma variável, e assim iremos economizar memória
	float peso, altura;
	//2º Criando o cadastro do aluno e possibilitando que o cliente consiga atribuir valores as variáveis, ou seja, o cliente conseguirá inserir dados no app
	//OBS: char[]=gets       outras variáveis=scanf
	printf("CADASTRO DE ALUNO \n\n");
	printf("nome do aluno: ");
	//gets-usado para o cliente conseguir inserir os dados no app. Só funciona na variável char[]
	gets(aluno);
	//scanf-usado para  cliente inserir os dados no app. Funciona nas variáveis char, int, float e double
	//Em scanf, quando o cliente for inserir dados com números decimais coloca-se (,) e não (.)    EX: altura: 1,70
	//&-usado antes do nome dado a variável apenas quando se usa scanf
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
	//abaixo usamos (,) após a variável peso para acrescentar outro texto
	printf("peso: %.2f\n", peso, "kg");
	printf("altura: %.2f", altura, "metros");
	printf("\n");
	printf("____________");
	system("pause");
	return 0;
}

