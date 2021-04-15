/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:55:47 by gandrade          #+#    #+#             */
/*   Updated: 2021/04/08 15:27:22 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int l;
	int r;
	int aux[size];

	l = 0;
	r = size - 1;
	while (r >= 0)
	{
		aux[l] = tab[r];
		r--;
		l++;
	}
	l = 0;
	while (l < size)
	{
		tab[l] = aux[l];
		l++;
	}
}
