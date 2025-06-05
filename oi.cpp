#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(int argc, char *argv[]) 
{
	// a linha abaixo configura o idioma para o português//
	setlocale(LC_ALL,"portuguese");
	// A LINHA ABAIXO CONFIGURA AS CORES TANTO DO FUNDO QUANTO DO TEXTO //
	system("color 5E");
	printf("olá mundo \n");
	system("pause");
	// a linha abaixo limpa a tela//
	system("cls");
	system("color F0");
	printf("matimaluco é o rei\n");
	system ("pause");
	return 0;	
	
}
