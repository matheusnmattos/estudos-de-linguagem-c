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
    setlocale(LC_ALL, "portuguese");  // Define o idioma para português

    printf("exemplo de função\n\n");
    system("pause");  // Pausa a execução antes de limpar a tela
    system("cls");  // Limpa a tela

    printf("escolha uma opção para avaliar o que você achou do projeto:\n1: gostei do projeto\n2: nao gostei do projeto\n\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            system("cls");
            teste();  // Chama a função teste
            break;
        case 2:
            system("cls");
            teste2();  // Chama a função teste2
            break;
        default:
        	system("cls");
            printf("opção invalida, escolha uma opção valida dentre as que foram  apresentadas.\n\n");
            break;
    }

    system("pause");  // Pausa a execução para o usuário ver o resultado
    return 0;
}

