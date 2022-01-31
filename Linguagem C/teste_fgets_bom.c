    #include <stdio.h>
    #include <string.h>
    
    void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    }
    
    void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}
    
int main() {
        
    int idade;
    char nome[50];
    
   printf("Digite o valor da idade: ");
   scanf("%d", &idade);
   printf("Digite o nome da pessoa: ");
   limpar_entrada();
   fgets(nome, 50, stdin);
   
    
    printf("IDADE = %d\n", idade);
    printf("NOME = %s\n", nome);
    
    return 0;
    }
