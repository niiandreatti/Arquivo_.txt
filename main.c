#include <stdio.h>
#include <string.h>

int main() {
    // Cria e abre o arquivo exemplo.txt para escrita
    FILE *arquivo = fopen("exemplo.txt", "w");
    int contador = 0;
    char linha[100][256];
    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1; 
    }


    fprintf(arquivo, "Olá, Mundo!\n");
    fprintf(arquivo, "Este é um exemplo de escrita em um arquivo .txt.\n");

    // Fecha o arquivo
    fclose(arquivo);

    printf("Dados foram escritos com sucesso em exemplo.txt\n");
    
    arquivo = fopen("exemplo.txt", "r");
    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo para leitura.\n");
        return 1;
    }
    // ler e mostrar a quantidade de linhas no arquivo
    while(fgets(linha[contador],256, arquivo) != NULL){
        linha[contador][strcspn(linha[contador],"\n")] = '\0';
        contador ++;
    }
            
    fclose(arquivo);
    printf("\n a quantidade de linha no arquivo é: %d\n", contador);
    
    for(int i = 0;i<contador;i++){
        printf("%s\n", linha[i]);
    }
    
}
