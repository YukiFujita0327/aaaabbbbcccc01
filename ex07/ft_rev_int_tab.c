/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:14:18 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/13 23:43:06 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int i;
	int tmp_tab[256];

	i = 0;
	n = size - 1;
	while (n >= 0)
	{
		tmp_tab[i] = tab[n];
		n--;
		i++;
	}
	while (n < size)
	{
		tab[n] = tmp_tab[n];
		n++;
	}
}
