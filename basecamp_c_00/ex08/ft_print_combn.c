/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:36:01 by gandrade          #+#    #+#             */
/*   Updated: 2021/04/06 17:22:38 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(char x, char y);

void	ft_print_combn(int n)
{
	char a;
	char b;
	char c;

	c = n + 48;
	if (c > 48 && c <= 58)
	{
		a = '0';
		while (a <= '8')
		{
			b = a + 1;
			while (b <= '9')
			{
				ft_display(a, b);
				b++;
			}
			a++;
		}
	}
}

void	ft_display(char x, char y)
{
	write(1, &x, 1);
	write(1, &y, 1);
	if (x != '8' || y != '9')
	{
		write(1, ", ", 2);
	}
}
