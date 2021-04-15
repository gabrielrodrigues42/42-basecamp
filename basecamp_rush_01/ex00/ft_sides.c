/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sides.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:08:22 by gandrade          #+#    #+#             */
/*   Updated: 2021/04/11 20:30:57 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_up(char *str)
{
	int i;
	char*aux;

	aux = malloc(4 * sizeof(char));
	i = 0;
	while (i <= 3)
	{
		aux[i] = str[i];
		i++;
	}
	return (aux);
}

char	*ft_down(char *str)
{
	int i;
	int j;
	char*aux;

	aux = malloc(4 * sizeof(char));
	i = 0;
	j = 4;
	while (j >= 4 && j <= 7)
	{
		aux[i] = str[j];
		j++;
		i++;
	}
	return (aux);
}

char	*ft_left(char *str)
{
	int i;
	int j;
	char*aux;

	aux = malloc(4 * sizeof(char));
	i = 0;
	j = 8;
	while (j >= 8 && j <= 11)
	{
		aux[i] = str[j];
		j++;
		i++;
	}
	return (aux);
}

char	*ft_right(char *str)
{
	int i;
	int j;
	char*aux;

	aux = malloc(4 * sizeof(char));
	i = 0;
	j = 12;
	while (j >= 12 && j <= 15)
	{
		aux[i] = str[j];
		j++;
		i++;
	}
	return (aux);
}
