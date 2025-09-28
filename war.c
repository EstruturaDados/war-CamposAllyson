#include <stdio.h>
#include <string.h>

//Define a estrutura Territorio.
typedef struct{
    char nome[30];
    char cor[10];
    int tropas;    
} Territorio;

//Programa principal
int main(){
    //Define um vetor chamado territorios, c/ 5 elementos da struct Territorio.
    Territorio territorios[5];

    printf("Bem-Vindo Ao War!- by MateCheck\n");
    printf("\n");
    printf("***Cadastro de Territórios***\n");
    printf("\n");
    //Laço de repetição for para que o usuário cadastre os campos da struct
    for(int i = 0; i < 5; i++){
        //uso do fgets p/ que o usuário possa digitar um nome com espaços.
        //strcspn para encontrar o \n (quebra de linha) incluído
        //pelo fgets na string armazenada p/ substituirmos pelo caractere
        // \0 (nulo) p/ indicar o fim da string. 
        printf("Digite o nome do %dº território: ", i + 1);
        fgets(territorios[i].nome, 30, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        printf("Digite a cor do exército: ");
        fgets(territorios[i].cor, 10, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        printf("Digite o número de tropas: ");
        scanf("%d", &territorios[i].tropas);
        //Uso do getchar para limpar o scanf antes da próxima leitura.
        getchar();
  
        printf("\n");     
    }

    printf("***Territórios cadastrados***\n");
    printf("\n");
    //Loop for para percorrer e imprimir os dados do vetor territorios.
    for(int i = 0; i < 5; i++){
        printf("%dº Território \n", i + 1);
        printf("\n");

        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Quantidade de tropas: %d\n", territorios[i].tropas);
        printf("\n");
    }

        
} 