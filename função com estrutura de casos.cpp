#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void teste(void); 
void teste2(void);
void teste (void)
{printf("matimaluco tem um pincel enorme\n");
}
void teste2 (void)
{printf("matimaluco é o pai dos burros\n");}
int main (int argc, char *argv[])
{int escolha;
	setlocale(LC_ALL,"portuguese");
	printf("exemplo de função\n\n");
	system("pause");
	system("cls");
	printf("escolha uma opção\n1: \n2: \n\n");
	scanf("%d",&escolha);
	switch(escolha)
	{case 1:
			system("cls");
			teste();
			break;
		case 2:
			system("cls");
			teste2();
			break;
			default:
printf("ai no caso burro é você paizão, não sabe escolher 1 ou 2? ta querendo aparecer caralho?\n\n");}
	system("pause");
	return 0;}
