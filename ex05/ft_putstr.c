/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:57:00 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/13 23:38:26 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		get_str_len(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

void	ft_putstr(char *str)
{
	char	in_str_arr[256];
	int		n;

	n = 0;
	while (n < get_str_len(str))
	{
		in_str_arr[n] = str[n];
		write(1, &str[n], 1);
		n++;
	}
}
