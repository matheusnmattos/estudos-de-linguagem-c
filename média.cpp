#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char*argv[])
{
	float nota1, nota2,media;
	setlocale(LC_ALL,"portuguese");
	printf("digite a sua primeira nota\n");
	scanf("%f",&nota1);
	system("cls");
	printf("digite a sua segunda nota\n");
	scanf("%f",&nota2);
	media=(nota1+nota2)/2;
	system("cls");
	printf("sua média foi %.2f\n",media);
	system("pause");
	return 0;
	
}
