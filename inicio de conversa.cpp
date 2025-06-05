#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]) 
//aula do tipo char//
{
//variavel abaixo é a variavel do tipo caracter//
	char nome[30];
	printf("digite o seu nome\n\n");
	//variavel abaixo faz a leitura e guarda o que foi digitado//
	gets(nome);
	//variavel que faz a limpeza da tela para mostrar a proxima tela//
	system("cls");
	printf("Bem vindo %s\n",nome);
	system("pause");
	return 0;
}
