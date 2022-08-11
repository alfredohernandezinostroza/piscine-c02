#include <stdio.h>

char	*ft_strlowcase(char*);

int	main(void)
{
	char	str1[] = "HELLO5";
	char	str2[9] = "WWWWW/WWW";
	char	str3[9] = "WWwW~/WW";
	char	str4[9] = "WWWWWWWW";
	char	str5[10] = "WBWBWwbZW";
	char	str6[10] = "WaWzWwAZ0";

	printf("TEST: %s\n", ft_strlowcase(str1));
	printf("TEST: %s\n", ft_strlowcase(str2));
	printf("TEST: %s\n", ft_strlowcase(str3));
	printf("TEST: %s\n", ft_strlowcase(str4));
	printf("TEST: %s\n", ft_strlowcase(str5));
	printf("TEST: %s\n", ft_strlowcase(str6));

}