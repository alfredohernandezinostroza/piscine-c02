#include <stdio.h>

int  ft_str_is_numeric(char*);

int main(void)
{
	char	str1[] = "";
	char	str2[9] = "WWWWW/WWW";
	char	str3[9] = "123/W3W";
	char	str4[9] = "12345678";
	char	str5[10] = "";
	char	str6[9] = "";

	printf("TEST: %d\n", ft_str_is_numeric(str1));
	printf("TEST: %d\n", ft_str_is_numeric(str2));
	printf("TEST: %d\n", ft_str_is_numeric(str3));
	printf("TEST: %d\n", ft_str_is_numeric(str4));
	printf("TEST: %d\n", ft_str_is_numeric(str5));
	printf("TEST: %d\n", ft_str_is_numeric(str6));
	printf("TEST: %s\n", str5);

}