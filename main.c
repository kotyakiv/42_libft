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
	char c[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char d[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	printf("%s\n", (char *)memset(c, '-', 3)) ;
	printf("%s\n", (char *)ft_memset(d, '-', 3));
	
	printf("bzero:\n");
	bzero(c, 2);
	ft_bzero(d, 2);
	printf("%s\n", c);
	printf("%s\n", d);
	printf("%s\n", c+2);
	printf("%s\n", d+2);

	printf("strstr\n");
	printf("%s\n", strstr("Is there an needli and my needle one", "needle"));
	printf("%s\n", ft_strstr("Is there an needli and my needle one", "needle"));
	printf("%s\n", strstr("Is there an needli and my needle one", ""));
	printf("%s\n", ft_strstr("Is there an needli and my needle one", ""));
	//printf("%s\n", strstr("12", "my"));
	printf("%s\n", ft_strstr("12", "my"));

	printf("strnstr\n");
	//printf("%s\n", strnstr("Is there an needli and my needle one", "needle", 33));
	printf("%s\n", ft_strnstr("Is there an needli and my needle one", "needle", 33));
	//printf("%s\n", strnstr("Is there an needli and my needle one", "needle", 15));
	printf("%s\n", ft_strnstr("Is there an needli and my needle one", "needle", 15));

	printf("strchr\n");
	printf("%s\n", strchr("Is there an needli and my needle one", 'a'));
	printf("%s\n", ft_strchr("Is there an needli and my needle one", 'a'));
	//printf("%s\n", strchr("Is there an needli and my needle one", 'w'));
	printf("%s\n", ft_strchr("Is there an needli and my needle one", 'w'));

	printf("strrchr\n");
	printf("%s\n", strrchr("Is there an needli and my needle one", 'a'));
	printf("%s\n", ft_strrchr("Is there an needli and my needle one", 'a'));
	//printf("%s\n", strrchr("Is there an needli and my needle one", 'w'));
	printf("%s\n", ft_strrchr("Is there an needli and my needle one", 'w'));

	printf("ft_strtrim\n");
	printf("%s$\n", ft_strtrim(" 	Baba yagoda		123  	"));

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

	printf("isalnum:\n");
	a = 'A';
	printf("%d\t%d\t%d\n", isalnum(a), ft_isalnum(a), compare_int(isalnum(a), ft_isalnum(a)));
	a = '1';
	printf("%d\t%d\t%d\n", isalnum(a), ft_isalnum(a), compare_int(isalnum(a), ft_isalnum(a)));
	a = '-';
	printf("%d\t%d\t%d\n", isalnum(a), ft_isalnum(a), compare_int(isalnum(a), ft_isalnum(a)));
	a = '\n';
	printf("%d\t%d\t%d\n", isalnum(a), ft_isalnum(a), compare_int(isalnum(a), ft_isalnum(a)));

	printf("isalpha:\n");
	a = 'A';
	printf("%d\t%d\t%d\n", isalpha(a), ft_isalpha(a), compare_int(isalpha(a), ft_isalpha(a)));
	a = '+';
	printf("%d\t%d\t%d\n", isalpha(a), ft_isalpha(a), compare_int(isalpha(a), ft_isalpha(a)));
	a = '1';
	printf("%d\t%d\t%d\n", isalpha(a), ft_isalpha(a), compare_int(isalpha(a), ft_isalpha(a)));

	printf("isascii:\n");
	a = 'A';
	printf("%d\t%d\t%d\n", isascii(a), ft_isascii(a), compare_int(isascii(a), ft_isascii(a)));
	a = '+';
	printf("%d\t%d\t%d\n", isascii(a), ft_isascii(a), compare_int(isascii(a), ft_isascii(a)));
	a = 130;
	printf("%d\t%d\t%d\n", isascii(a), ft_isascii(a), compare_int(isascii(a), ft_isascii(a)));



	ft_putstr("putstr\n");
	ft_putendl("putendl");
	ft_putendl("putnbr:");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(100);
	printf("\n");
	ft_putnbr(9);
	printf("\n");
	return (0);
}
