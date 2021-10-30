#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	compare_int(int a, int b)
{
	if (a == b)
		return (1);
	return (0);	
}

int	compare_size_t(int a, int b)
{
	if (a == b)
		return (1);
	return (0);	
}

int	compare_str(char *a, char *b)
{
	if (strcmp(a, b) == 0)
		return (1);
	return (0);	
}

int main()
{
	char a;
	int b;

	printf("Compare functions ft_ with standart lib\n");
	printf("isdigit:\n");
	a = 'o';
	printf("%d\t%d\t%d\n", isdigit(a), ft_isdigit(a), compare_int(isdigit(a), ft_isdigit(a)));
	a = 'b';
	printf("%d\t%d\t%d\n", isdigit(a), ft_isdigit(a), compare_int(isdigit(a), ft_isdigit(a)));
	b = 4;
	printf("%d\t%d\t%d\n", isdigit(b), ft_isdigit(b), compare_int(isdigit(b), ft_isdigit(b)));

	printf("isprint:\n");
	a = 'a';
	printf("%d\t%d\t%d\n", isprint(a), ft_isprint(a), compare_int(isprint(a), ft_isprint(a)));
	a = 3;
	printf("%d\t%d\t%d\n", isprint(a), ft_isprint(a), compare_int(isprint(a), ft_isprint(a)));
	a = '\t';
	printf("%d\t%d\t%d\n", isprint(a), ft_isprint(a), compare_int(isprint(a), ft_isprint(a)));

	printf("tolower:\n");
	a = 'A';
	printf("%c\t%c\t%d\n", tolower(a), ft_tolower(a), compare_int(tolower(a), ft_tolower(a)));
	a = 'a';
	printf("%c\t%c\t%d\n", tolower(a), ft_tolower(a), compare_int(tolower(a), ft_tolower(a)));
	a = '1';
	printf("%c\t%c\t%d\n", tolower(a), ft_tolower(a), compare_int(tolower(a), ft_tolower(a)));

	printf("toupper:\n");
	a = 'A';
	printf("%c\t%c\t%d\n", toupper(a), ft_toupper(a), compare_int(toupper(a), ft_toupper(a)));
	a = 'a';
	printf("%c\t%c\t%d\n", toupper(a), ft_toupper(a), compare_int(toupper(a), ft_toupper(a)));
	a = '1';
	printf("%c\t%c\t%d\n", toupper(a), ft_toupper(a), compare_int(toupper(a), ft_toupper(a)));

	printf("strlen:\n");
	char c1[] = "Hello";
	printf("%ld\t%ld\t%d\n", strlen(c1), ft_strlen(c1), compare_size_t(strlen(c1), ft_strlen(c1)));
	char c2[] = "";
	printf("%ld\t%ld\t%d\n", strlen(c2), ft_strlen(c2), compare_size_t(strlen(c2), ft_strlen(c2)));




	return (0);
}
