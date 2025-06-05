#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int numero;
int main(int argc, char*argv[])
{
	//  para poder 
	setlocale (LC_ALL,"portuguese");
	printf("sistemas\n\n");
	printf("1- Windows\n");
	printf("2- Linux\n");
	printf("\nEscolha a opção desejada: \n");
	scanf("%d",&numero);
	switch(numero)
	{
		case 1: 
		system("cls");
		printf("iniciando o Windows...\n\n");
		break;
		case 2:
			system("cls");
			printf("iniciando o Linux\n\n");
			break;
			
		default:
			system("cls");
			printf("opção invalida, o sistema irá reiniciar, por favor escolha uma opção valida\n\n");
	}
	system("pause");
	return 0;	
	
	
}
