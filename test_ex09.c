#include <stdio.h>

char	*ft_strcapitalize(char*);

int main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[9] = "WWWWW/WWW";
	char	str3[9] = "WWwW~/WW";
	char	str4[9] = "WWWWWWWW";
	char	str5[10] = "WBWBWwbZW";
	char	str6[10] = "WaWzWwAZ0";

	printf("TEST: %s\n", ft_strcapitalize(str1));
	printf("TEST: %s\n", ft_strcapitalize(str2));
	printf("TEST: %s\n", ft_strcapitalize(str3));
	printf("TEST: %s\n", ft_strcapitalize(str4));
	printf("TEST: %s\n", ft_strcapitalize(str5));
	printf("TEST: %s\n", ft_strcapitalize(str6));

}