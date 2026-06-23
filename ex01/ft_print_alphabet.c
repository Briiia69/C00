#include <unistd.h>

void ft_print_alphabet(void) {
  int i;
  i = 141;
  while (i < 171) {
    write(1, &i, 1);
    i++;
  }
}
