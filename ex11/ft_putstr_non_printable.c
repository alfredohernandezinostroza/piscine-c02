/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aantonio <aantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:29:11 by aantonio          #+#    #+#             */
/*   Updated: 2022/08/11 20:29:11 by aantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	int is_printable;

	is_printable = 1;
	if (' ' > c || c > '~')
	{
		is_printable = 0;
	}
	return (is_printable);
}

int	get_int_size(int number)
{
	int	size;

	size = 0;
	if (number == 0)
	{
		return (1);
	}
	while (number > 0)
	{
		number = number / 10;
		size++;
	}
	return (size);
}

void	print_int(int number)
{
	int	size;
	int	power;
	int i;
	int digit;

	size = get_int_size(number);
	power = 1;
	i = 0;
	while (i < size-1)
	{
		power *= 10;
		i++;
	}
	i = 0;
	while (i < size)
	{
		digit = (number / power) % 10;
		write(1,&digit,1);
		i++;
	}
}

void	ft_putstr_non_printable(char *str){
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_printable(str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, &"\\",1);
			print_int(str[i]);
		}
		i++;
	}
}
