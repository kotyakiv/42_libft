#include <stdio.h>
#include "libft.h"

int main()
{
	char *big = "abcdef";
	char *little = "abcdefghijklmnop";
	size_t size = 6;

	printf("%d\n%d\n", strncmp(big, little, size) , ft_strncmp(big, little, size));
	return 0;
}