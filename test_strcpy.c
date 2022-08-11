/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:34:32 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/11 12:56:39 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char*, char*, unsigned int);

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[9] = "WWWWWWWW";
    char *ptr = str2;

    printf("%s ---- %s\n", str1, str2);
	strncpy(str2, str1, 5);
    printf("%s ---- %s\n", str1, str2);
    int i = 0;
    while(i<100){
        printf("%c",*(ptr+i));
        i++;
    }
	return (0);
}