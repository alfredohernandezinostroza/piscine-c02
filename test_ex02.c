#include <stdio.h>

int	 ft_str_is_alpha(char*);

int	main(void)
{
	char	str1[] = "HELLO5";
	char	str2[9] = "WWWWW/WWW";
	char	str3[9] = "WWWWW/WWW";
	char	str4[9] = "WWWWWWWW";
	char	str5[10] = "WBWBWwbZW";
	char	str6[9] = "WaWzWwAZ0";

	printf("TEST: %d\n", ft_str_is_alpha(str1));
	printf("TEST: %d\n", ft_str_is_alpha(str2));
	printf("TEST: %d\n", ft_str_is_alpha(str3));
	printf("TEST: %d\n", ft_str_is_alpha(str4));
	printf("TEST: %d\n", ft_str_is_alpha(str5));
	printf("TEST: %d\n", ft_str_is_alpha(str6));
	printf("TEST: %s\n", str5);

}