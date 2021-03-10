#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Aula 4-UC9  Cálculo do IMC
	@author Camily Cruz */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	system("color 5F");
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
	//VARIÁVEIS
	float IMC,PESO,ALTURA;
	//ENTRADA
	printf("Digite seu peso:  " ,"Kg \n");
	scanf("%f", &PESO);
	printf("Digite sua altura: " , "Metros \n");
	scanf("%f", &ALTURA);
	//PROCESSAMENTO
	IMC=PESO/(ALTURA*ALTURA);
	//SAÍDA
	printf("imc: %.2f \n", IMC);
	//condicionais
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
		printf("Obesidade nível 1 \n");
	}
	else if (IMC < 40){
		printf("Obesidade nível 2(severa) \n");
	}
	else if (IMC > 40){
		printf("Obesidade nível 3(mórbida) \n");
	}
	system("pause");
	return 0;
}
