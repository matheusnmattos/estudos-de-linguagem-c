#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void teste(void); 
void teste2(void);

void teste(void) {
    printf("matimaluco tem um pincel enorme\n");
}

void teste2(void) {
    printf("matimaluco � o pai dos burros\n");
}

int main(int argc, char *argv[]) {
    int escolha;
    setlocale(LC_ALL, "portuguese");  // Define o idioma para portugu�s

    printf("exemplo de fun��o\n\n");
    system("pause");  // Pausa a execu��o antes de limpar a tela
    system("cls");  // Limpa a tela

    printf("escolha uma op��o\n1: acha ele inteligente\n2: nao acho ele inteligente\n\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            system("cls");
            teste();  // Chama a fun��o teste
            break;
        case 2:
            system("cls");
            teste2();  // Chama a fun��o teste2
            break;
        default:
            printf("ai no caso burro � voc� paiz�o, n�o sabe escolher 1 ou 2? ta querendo aparecer caralho?\n\n");
            break;
    }

    system("pause");  // Pausa a execu��o para o usu�rio ver o resultado
    return 0;
}

