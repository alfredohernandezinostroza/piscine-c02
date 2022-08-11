#include <stdio.h>

char	*ft_putstr_non_printable(char*);

int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "WCoucou\ntu vas bien ?";
	char	str3[] = "WWwW~/WW";
	char	str4[] = "WWWWWWWW";
	char	str5[] = "WBWBWwbZW";
	char	str6[] = "WaWzWwAZ0";

	ft_putstr_non_printable(str1);
	printf("\n");
	ft_putstr_non_printable(str2);
	printf("\n");
	ft_putstr_non_printable(str3);
	printf("\n");
	ft_putstr_non_printable(str4);
	printf("\n");
	ft_putstr_non_printable(str5);
	printf("\n");
	ft_putstr_non_printable(str6);
	printf("\n");

}