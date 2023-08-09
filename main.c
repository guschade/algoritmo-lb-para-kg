#include <stdio.h>

int main(void) {
  float quilograma, libra;
  printf("insira seu peso (em lb): ");
  scanf("%f", &libra);

  quilograma = libra * 0.453592;
  printf("%.2f libras são equivalentes a %.2f quilos.", libra, quilograma);
  return 0;
}
