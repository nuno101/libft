#include <stdio.h>
#include "../ft_strlen.c"
#include "../ft_strlcat.c"

int main()
{
	char *buffer;
	char *src;
	size_t dstsize;

	buffer = (char *) malloc(10);
	*(buffer + 0) = 74;
	*(buffer + 1) = 'O';
	*(buffer + 2) = 'E';
	*(buffer + 3) = 'L';
	src = "1234567890";
	dstsize = 10;

	printf("Dest buffer is: %s with size: %d\n", buffer, ft_strlen(buffer));
	printf("Source string is: %s with size: %d\n", src, ft_strlen(src));
	printf("Maximum output size including  is %zu minus 1 for termination char\n", dstsize);

	printf("Output string size is: %zu.\n", ft_strlcat(buffer, src, dstsize));
	printf("Output string is: %s\n", buffer);
}
