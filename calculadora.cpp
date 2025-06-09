#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somar (float num1, float num2)
{
	return num1 + num2;
}
float subtrair (float num1, float num2)
{
	return num1 - num2;
}

float dividir (float num1, float num2)
{
	return num1 / num2;
}

float multiplicar (float num1, float num2)
{
	return num1 * num2;
}

float porcentagem (float num1, float num2)
{
	return (num1 * num2)/100;
}

int main (int argc, char *argv[])
{
	setlocale(LC_ALL,"portuguese");
	int opcao;
	float num1,num2,resultado;
	printf("Calculadora\n");
	printf("------------------------------------------------------\n");
	printf("digite o primeiro número\n");
	scanf("%f",&num1);
	printf("digite o segundo número\n");
	scanf("%f",&num2);
	printf("------------------------------------------------------\n");
	printf("1. SOMAR\n");
	printf("2. SUBTRAIR\n");
	printf("3. MULTIPLICAR\n");
	printf("4. DIVIDIR\n");
	printf("5. CALCULAR PORCENTAGEM\n");
	printf("6. SAIR\n");
	printf("\n");
	printf("Digite a opção desejada\n");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
			resultado = somar(num1, num2);
			break;
		case 2:
			resultado = subtrair(num1, num2);
			break;
		case 3:
			resultado = multiplicar(num1, num2);
			break;
		case 4:
			if (num2 == 0)
			{
				printf("Não é possivel dividir por 0\n");
			}
			else{
			
			resultado = dividir(num1, num2);
			break;
			}
		case 5:
			resultado = porcentagem(num1, num2);
			break; 
			default:
				printf("Opção inválida\n");
				break;
		case 6:
			printf("Saindo...");
	}
	printf("-------------------------------------------\n");
	printf("Resultado: %.2f\n",resultado);
	printf("\n");
	system("pause");
	return 0;
}
