/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:59:26 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/11 12:59:26 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strupcase(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

