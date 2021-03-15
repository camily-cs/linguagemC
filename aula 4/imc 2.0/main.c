#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Aula 6-UC 9 c�lculo do IMC 2.0
	@author Camily Cruz */

int numero;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	system("color 5F");
	//tipos de vari�veis:
	char professor[35] = {"Camily Cruz"};
	char personalTrainer ='s';
	int periodo = 1;
	float cargaHoraria = 30.5;
	double salario = 3500.65;
	printf("IIIIIIIIII MMMMMMMM               MMMMMMMM        CCCCCCCCCCCCC\n");
	printf("I::::::::I M:::::::M             M:::::::M     CCC::::::::::::C\n");
	printf("I::::::::I M::::::::M           M::::::::M   CC:::::::::::::::C\n");
	printf("II::::::II M:::::::::M         M:::::::::M  C:::::CCCCCCCC::::C\n");
  	printf("  I::::I   M::::::::::M       M::::::::::M C:::::C       CCCCCC\n");
  	printf("  I::::I   M:::::::::::M     M:::::::::::MC:::::C              \n");
  	printf("  I::::I   M:::::::M::::M   M::::M:::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M M::::M M::::MM::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M M::::M::::M  M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M  M:::::::M   M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M   M:::::M    M::::::MC:::::C              \n");
  	printf("  I::::I   M::::::M    MMMMM     M::::::M C:::::C       CCCCCC\n");
	printf("II::::::II M::::::M              M::::::M  C:::::CCCCCCCC::::C\n");
	printf("I::::::::I M::::::M              M::::::M   CC:::::::::::::::C\n");
	printf("I::::::::I M::::::M              M::::::M     CCC::::::::::::C\n");
	printf("IIIIIIIIII MMMMMMMM              MMMMMMMM        CCCCCCCCCCCCC\n\n");
	//menu de op��es
	int opcao;
	printf("____________________ \n\n");
	printf("1. Gest�o de funcion�rios \n");
	printf("2. Cadastro do aluno \n");
	printf("3. Sobre n�s \n");
	printf("\n");
	scanf("%d", &opcao);
	switch(opcao){
			case 1:
			system("cls");
			system("color �20");
			printf("Professor: %s\n", professor);
			printf("Personal Trainer(s/n):%c\n",personalTrainer);
			printf("Per�odo: %d\n", periodo);
			printf("Carga Hor�ria semanal: %.1f\n", cargaHoraria);
			printf("Sal�rio: R$ %.2lf\n",salario);
			printf("_________________ \n \n");
			break;
			
			case 2:
			system("cls");
			system("color 5F");
			//Para limpar o buffet(fluxo) quando estiver dando erro:
			fflush(stdin);
			//vari�veis:
			char ALUNO[50];
			char SEXO;
			char IDADE;
			float IMC,PESO,ALTURA;
			//ENTRADA
			printf("CADASTRO DE ALUNO \n\n");
			printf("nome do aluno: \n");
			gets(ALUNO);
			printf("sexo(M/F): \n");
			scanf("%c", &SEXO);
			printf("idade: ");
			scanf("%d", &IDADE);
			printf("Peso(kg): ");
			scanf("%f", &PESO);
			printf("altura(m): ");
			scanf("%f", &ALTURA);
			//PROCESSAMENTO
			IMC=PESO/(ALTURA*ALTURA);
			printf("\n");
			system("pause");
			system("cls");
			system("color 30");
			printf("Ficha do aluno(a): \n");
			printf("_______________________\n");
			printf("aluno: %s\n", ALUNO);
			printf("sexo: %c\n", SEXO);
			printf("idade: %d\n", IDADE);
			printf("Peso: %.2f\n", PESO);
			printf("Altura: %.2f\n", ALTURA);
			printf("IMC: %.2f\n", IMC);
			//SA�DA
			if (IMC < 17){
				printf("Muito abaixo do peso \n");
			}
			else if (IMC < 18.5){
				printf("Abaixo do peso \n");
			}
			else if (IMC < 25){
				printf("Peso ideal \n");
			}
			else if (IMC < 35){
				printf("Obesidade n�vel 1 \n");
			}
			else if (IMC < 40){
				printf("Obesidade n�vel 2(severa) \n");
			}
			else if (IMC > 40){
				printf("Obesidade n�vel 3(m�rbida) \n");
			}
			printf("____________________\n");
			break;
			
			case 3:
			system("cls");
			printf("SISTEMA DE GEST�O DE ACADEMIAS \n");
			printf("Vers�o 3.0");
			printf("@author Camily Cruz \n");
			printf("sob licen�a MIT \n");
			printf("____________________ \n\n");
			break;
			
			default:
			printf("Op��o inv�lida \n");
			break;
		}
			
system("pause");
return 0;
}
