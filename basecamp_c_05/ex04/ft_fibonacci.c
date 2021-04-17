/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:34:46 by gandrade          #+#    #+#             */
/*   Updated: 2021/04/17 01:00:50 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int f;

	if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index > 1)
	{
		f = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (f);
	}
	else
	{
		return (-1);
	}
}
