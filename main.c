#include <stdio.h>

int main() {
    // Cria e abre o arquivo exemplo.txt para escrita
    FILE *arquivo = fopen("exemplo.txt", "w");
    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1; // Retorna um código de erro
    }

    // Escreve algumas linhas no arquivo
    fprintf(arquivo, "Olá, Mundo!\n");
    fprintf(arquivo, "Este é um exemplo de escrita em um arquivo .txt.\n");

    // Fecha o arquivo
    fclose(arquivo);

    printf("Dados foram escritos com sucesso em exemplo.txt\n");
    return 0;
    
    // ler e mostrar a quantidade de linhas no arquivo
    int contador = 0;
    FILE *arquivo = fopen("exemplo.txt", "r");
        if(arquivo == NULL){
            return 1;
        }else{
            char linha[256];
            while(fgets(linha, sizeof(linha), arquivo) != NULL){
                printf("%s", linha);
                contador ++;
            }
            
            fclose(arquivo);
            printf("\n a quantidade de linha no arquivo é: %d", contador);
        }
}
