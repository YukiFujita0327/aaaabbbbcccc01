/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:15:41 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/13 23:37:29 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int a_tmp;
	int b_tmp;

	a_tmp = *a;
	b_tmp = *b;
	*a = a_tmp / b_tmp;
	*b = a_tmp % b_tmp;
}
