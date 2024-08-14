#include <stdio.h>

int main() {
  int a, b, soma;
  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  scanf("%d", &b);
  soma = a + b;
  printf("A soma dos números %d e %d é igual a: %d",a,b,soma);

  return 0;
}
