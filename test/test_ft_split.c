#include <stdio.h>
#include "../ft_strlen.c"
#include "../ft_bzero.c"
#include "../ft_calloc.c"
#include "../ft_strchr.c"
#include "../ft_substr.c"
#include "../ft_split.c"

int count_words(const char *s, char c);
//char    **split_string(const char *str, char c);

int main()
{
  char str[] = " test";
  char c = ' ';
  printf("Test string is: %s\n", str);
  printf("Test string has #words: %d.\n", count_words(str, c));
  char **result = ft_split(str, c);
  printf("Result string 0 is: %s\n", result[0]);
  printf("Result string 1 is: %s\n", result[1]);

  char str2[] = "    ";
  printf("Test string is: %s\n", str2);
  printf("Test string has #words: %d.\n", count_words(str2, c));

  char str3[] = "one two    ";
  printf("Test string is: %s\n", str3);
  printf("Test string has #words: %d.\n", count_words(str3, c));

  char str4[] = "one two three";
  printf("Test string is: %s\n", str4);
  printf("Test string has #words: %d.\n", count_words(str4, c));
  char **result4 = ft_split(str4, c);
  printf("Result string 0 is: %s\n", result4[0]);
  printf("Result string 1 is: %s\n", result4[1]);
  printf("Result string 2 is: %s\n", result4[2]);
  printf("Result string 3 is: %s\n", result4[3]);

}
