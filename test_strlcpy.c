/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   test_strcpy.c									  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: aantonio <aantonio@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/08/10 17:34:32 by aantonio		  #+#	#+#			 */
/*   Updated: 2022/08/11 15:09:51 by aantonio		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char*, char*, unsigned int);

int	main(void)
{
	char	str1[12] = "ABC";
	char	str2[9] = "12345678";
	char *ptr = str2;

	printf("%s ---- %s\n", str1, str2);
	unsigned int n = strlcpy(str2, str1, 3);
	printf("%s ---- %s\n", str1, str2);
	// printf("\n");
	// printf("%s ---- %s\n", str1, str2);
	// ft_strlcpy(str2, str1, 5);
	// printf("%s ---- %s\n", str1, str2);
	// printf("\n");
	// printf("%s ---- %s\n", str1, str2);
	// ft_strlcpy(str2, str1, 6);
	// printf("%s ---- %s\n", str1, str2);
	// printf("\n");
	// printf("%s ---- %s\n", str1, str2);
	// ft_strlcpy(str2, str1, 7);
	// printf("%s ---- %s\n", str1, str2);
	int	i = 0;
	while (i<100){
		write(1,(ptr+i),1);
		i++;
	}
	printf("\nRETURN RESULT: %d", n);
	return (0);
}
