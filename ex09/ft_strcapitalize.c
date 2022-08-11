/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:59:26 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/11 12:59:26 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcapitalize(char *str)
{
    int i;
    
    if ('a' <= str[0] && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
    i = 0;
    while(str[i+1])
    {
        if ((str[i] < 'a' || 'z' < str[i]) && (str[i] < 'A' || 'Z' < str[i]))
        {
            if (str[i] < '0' || '9' < str[i])
            {
                if ('a' <= str[i+1] && str[i+1] <= 'z')
                   str[i+1] -= 32;
            }
        }
        i++;
    }
    return (str);
}

