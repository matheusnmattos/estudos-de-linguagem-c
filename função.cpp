#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void teste(void); 

void teste (void)
{
	printf("matheus tem um pincel enorme\n");
	 
}


int main (int argc, char *argv[])
{
	int escolha;
	setlocale(LC_ALL,"portuguese");
	printf("exemplo de fun��o\n\n");
	system("pause");
	system("cls");
	printf("escolha uma op��o\n1:matheus � foda\n2:matheus � burro\n\n");
	scanf("%d",&escolha);
	switch(escolha)
	{
		case 1:
			system("cls");
			teste();
			break;
		case 2:
			system("cls");
			printf("realmente ele � muito burro...\n\n");
			break;
			
			default:
				printf("ai no caso burro � voc� paiz�o, n�o sabe escolher 1 ou 2? ta querendo aparecer caralho?\n\n");
	}
	system("pause");
	return 0;
}
