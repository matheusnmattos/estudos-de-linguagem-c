#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (int argc,char *argv[]) 
{
	int idade;
	setlocale(LC_ALL,"portuguese");
	printf("digite sua idade\n");
	scanf("%d",&idade);
	system("cls");
	printf("idade:%d\n\n",idade);	
	//a linha abaixo representa uma estrutura de decis�o//
	if(idade<18)
	{
	printf("com essa idade voc� n�o pode ver filmes adultos\n\n");
		
	}
	if(idade>=18)
	{
		printf("voce ja tem idade para ver filmes adultos, aproveite garot�o\n\n");
		
	}
	system("pause");
	return 0;
}
