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

  char str1[] = "test";
  printf("Test string is: %s\n", str1);
  printf("Test string has #words: %d.\n", count_words(str1, c));
  char **result1 = ft_split(str1, c);
  printf("Result string 0 is: %s\n", result1[0]);
  printf("Result string 1 is: %s\n", result1[1]);
  //printf("Result string 1 is: %s\n", result1[2]);

  return (0);

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

  char str5[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
  printf("Test string is: %s\n", str5);
  printf("Test string has #words: %d.\n", count_words(str5, c));
  char **result5 = ft_split(str5, c);
  printf("Result string 0 is: %s\n", result5[0]);
  printf("Result string 1 is: %s\n", result5[1]);
  printf("Result string 2 is: %s\n", result5[2]);
  printf("Result string 3 is: %s\n", result5[3]);
  printf("Result string 7 is: %s\n", result5[7]);
  printf("Result string 10 is: %s\n", result5[10]);
  printf("Result string 11 is: %s\n", result5[11]);
  printf("Result string 12 is: %s\n", result5[12]);

  char str6[] = "--1-2--3---4----5-----42";
  char cc = '-';
  printf("Test string is: %s\n", str6);
  printf("Test string has #words: %d.\n", count_words(str6, cc));
  char **result6 = ft_split(str6, cc);
  printf("Result string 0 is: %s\n", result6[0]);
  printf("Result string 1 is: %s\n", result6[1]);
  printf("Result string 2 is: %s\n", result6[2]);
  printf("Result string 3 is: %s\n", result6[3]);
  printf("Result string 4 is: %s\n", result6[4]);
  printf("Result string 5 is: %s\n", result6[5]);
  printf("Result string 6 is: %s\n", result6[6]);

  char *str7 = malloc(1 * sizeof(char *));
  char d = 0;
  printf("Test string is: %s\n", str7);
  printf("Test string has #words: %d.\n", count_words(str7, d));
  char **result7 = ft_split(str7, d);
  printf("Result string 0 is: %s\n", result7[0]);
}
