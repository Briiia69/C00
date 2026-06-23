#include <unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_print_comb(void) {
  int i;
  int j;
  int k;
  int first;

  i = 0;
  first = 1;
  while (i <= 7) {
    j = i + 1;
    while (j <= 8) {
      k = j + 1;
      while (k <= 9) {
        if (!first)
          ft_putchar(' ');
        first = 0;
        ft_putchar(i + '0');
        ft_putchar(j + '0');
        ft_putchar(k + '0');
        k++;
      }
      j++;
    }
    i++;
  }
}
