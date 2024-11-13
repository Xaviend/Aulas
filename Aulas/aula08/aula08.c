#include <stdio.h>
#include <string.h>


int main(){
    char primeiro_nome[20];
    char ultimo_nome[20];
    char nome[40];

    printf("Digite seu primeiro nome");
        scanf("%s", primeiro_nome);
        while (getchar()!= '\n');
       
    printf("Digite seu ultimo nome aqui")
        scanf("%s", ultimo_nome); 
        while (getchar()!= '\n');

    // nome = primeiro_nome
    strcopy(nome,primeiro_nome);        
        scanf("%s\n",nome);
    // nome = nome + ultimo_nome 
    strcat(nome, ultimo_nome);
        scanf("%s",nome);

        //tamanho da string
         printf("A palavra %s tem %i caracteres \n",primeiro_nome,strlen(primeiro_nome));

         //comparar strings 
         if(strcap(primeiro_nome,ultimo_nome)>0){
            printf("A ordem é %s , %s\n"ultimo_nome,primeiro_nome);
         }
         else{
            printf("A ordem é %s , %s\n" primeiro_nome,ultimo_nome);
         }
         
         //procurar por string 
         if(strstr(nome, "Silva")) {
            printf("Você é da Familia Silva \n");
         }else{ 
            printf("Você não é da Familia Silva\n")
         }

         //preencher uma string
         memset(nome,'a', 10);
         printf("%s\n",nome);
         memset(nome,'b' 20);
         prinf("%s\n",nome);
         memset(nome,0, sizeof(nome));//limpa a string 
        return 0;
        } 