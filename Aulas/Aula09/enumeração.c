#include <stdio.h>

int main(){
    const int DOMINGO = 1 ;
    const int SEGUNDA = 2 ;
    const int TERÇA = 3 ;
    const int QUARTA = 4 ;
    const int QUINTA =5 ;
    const int SEXTA = 6 ;
    const int SABADO = 7;
    
    enum dia_da_semana{
     DOM = 1 ;
     SEG = 2 ;
     TER = 3 ;
     QUA = 4 ;
     QUI = 5 ;
     SEX = 6 ;
     SAB = 7 ;


    };
      
      int dia;
    printf("Entre com o dia da semana: ");
    scanf("%i", dia);
    switch (dia)
    {
    case dom:
        printf("Domingo\n");
        break;
    case seg:
        printf("Segunda\n");
        break;
    case ter:
        printf("Terca\n");
        break;
    case qua:
        printf("Quanta\n");
        break;
    case qui:
        printf("Quinta\n");
        break;
    case sex:
        printf("Sexta\n");
        break;
    case sab:
        printf("Sabado\n");
        break;
    default:
        printf("Dia invalido");
        break;
    }
    
    
    
    
    return 0;

}