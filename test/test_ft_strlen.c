#include <stdio.h>
#include "../ft_strlen.c"

int main()
{
  char str[] = "test";
  printf("Test string is: %s\n", str);
  printf("Test string size is: %d.\n", ft_strlen(str));
}
