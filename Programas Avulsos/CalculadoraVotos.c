#include <stdio.h>

int main(void) {

  float te = 0;
  float b = 0;
  float n = 0;
  float v = 0;

  printf("Digite o número total de eleitores: ");
  scanf("%f", &te);
  printf("Digite o número total de votos em branco: ");
  scanf("%f", &b);
  printf("Digite o número total de votos nulos: ");
  scanf("%f", &n);
  printf("Digite o número total de votos válidos: ");
  scanf("%f", &v);

  float percent_b = (b / te) * 100;
  float percent_n = (n / te) * 100;
  float percent_v = (v / te) * 100;

  printf("Percentual de votos em branco: %.2f%%\n", percent_b);
  printf("Percentual de votos nulos: %.2f%%\n", percent_n);
  printf("Percentual de votos válidos: %.2f%%\n", percent_v);

  return 0;
}