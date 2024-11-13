#include <stdio.h>

int main(){
struct contato_t
{
    char nome[61];
    long int telefone;
    char email[61];
};

//typedef    
struct contato_t contato;

printf("Entre com o nome:\n");
scanf("%s", contato.nome);
while (getchar() != '\n');

printf("Entre com o telefone:\n");
scanf("%li",&contato.telefone);
while (getchar() != '\n');

printf("Entre com o email:\n" );
scanf("%s", contato.email);
while (getchar() != '\n');

printf("Dados do Contato\n");
printf("Nome.........%s\n", contato.nome);
printf("Telefone.......%li\n"contato.telefone);
printf("Email.....%s\n"contato.email);

struct contato_t contatos[10]
for (int i = 0; i < 10; i++)
{
  printf("Entre com o nome:\n");
scanf("%s", contato[i].nome);
while (getchar() != '\n');

printf("Entre com o telefone:\n");
scanf("%li",&contato[i].telefone);
while (getchar() != '\n');

printf("Entre com o email:\n" );
scanf("%s", contato[i].email);
while (getchar() != '\n');  
}

return 0;

}