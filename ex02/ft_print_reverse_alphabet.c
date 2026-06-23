#include <unistd.h>

void ft_print_alphabet(void) {
  int i;
  i = 171;
  while (i >= 141) {
    write(1, &i, 1);
    i--;
  }
}
