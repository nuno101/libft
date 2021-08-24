#include <stdio.h>
#include "../ft_isalpha.c"

int main()
{
  int c = 't';
  printf("Test string is: %d\n", c);
  printf("Test string size is alpha (return not 0): %d.\n", ft_isalpha(c));

  c = '1';
  printf("Test string is: %c\n", c);
  printf("Test string size is not alpha (return 0): %d.\n", ft_isalpha(c));
}
