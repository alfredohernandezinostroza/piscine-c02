
#include <ctype.h>
#include <stdio.h>

int	ft_str_is_printable(char *);

int	main(void)
{
   char c;
   for(c = 1; c <= 126; ++c)
   	if (ft_str_is_printable(&c)!= 0)
			 printf("CHARACTER: %c, CODE: %d\n", c, c);
   return 0;
}