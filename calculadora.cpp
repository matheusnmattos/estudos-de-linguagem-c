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

float somar (float num1, float num2)
{
	return (num1 * num2)/100;
}

int main (int argc, char *argv[])
{
	setlocale(LC_ALL,"portuguese")
	int opcao;
	float num1,num2,resultado;
	printf("Calculadora\n");
	printf("-------------------------");
	printf("digite o primeiro número");
	scanf("%f",num1);
	printf("-------------------------");
	printf("digite o segundo número");
	scanf("%f",num2);
	printf("-------------------------");
	printf("1. SOMAR\N");
	printf("2. SUBTRAIR\N");
	printf("3. MULTIPLICAR\N");
	printf("4. DIVIDIR\N");
	printf("5. CALCULAR PORCENTAGEM\N");
	printf("\N");
	printf("Digite a opção desejada");
	scanf("%d",opcao);
	system("pause");
	return 0;
	
}
