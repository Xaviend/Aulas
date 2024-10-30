//comando_for.c

int main() {
    int numero = 0;

    printf("Entre com um numero entre 1 e 10: ");
    scanf("%i", &numero);

    if (numero > 0 && numero < 11) {
      printf("Tabuada de %i\n", numero);
      // laco crescente
      for(int i=1; i<11; i++) {
        printf("%i x %i = %i\n", i, numero, i*numero);
      }
      // laco decrescente
      for(int i=10; i>0; i--) {
        printf("%i x %i = %i\n", i, numero, i*numero);
      }

      for(;;) {
        printf("Ao infinito e alem!\n");
      }
    //   printf("1 x %i = %i\n", numero, 1 * numero);
    //   printf("2 x %i = %i\n", numero, 2 * numero);
    //   printf("3 x %i = %i\n", numero, 3 * numero);
    }

    return 0;
}
