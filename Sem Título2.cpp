#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void teste(void); 
void teste2(void);

void teste(void) {
    printf("obrigado, pretendo continuar evoluindo\n\n");
}

void teste2(void) {
    printf("poxa, prometo que irei melhorar\n\n");
}

int main(int argc, char *argv[]) {
    int escolha;
    setlocale(LC_ALL, "portuguese");  // Define o idioma para portugu�s

    printf("exemplo de fun��o\n\n");
    system("pause");  // Pausa a execu��o antes de limpar a tela
    system("cls");  // Limpa a tela

    printf("escolha uma op��o para avaliar o que voc� achou do projeto:\n1: gostei do projeto\n2: nao gostei do projeto\n\n");
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
        	system("cls");
            printf("op��o invalida, escolha uma op��o valida dentre as que foram  apresentadas.\n\n");
            break;
    }

    system("pause");  // Pausa a execu��o para o usu�rio ver o resultado
    return 0;
}

