/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 01:29:54 by gandrade          #+#    #+#             */
/*   Updated: 2021/04/11 21:29:44 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_new_array(argv[1]);
		ft_up(ft_new_array(argv[1]));
		ft_down(ft_new_array(argv[1]));
		ft_left(ft_new_array(argv[1]));
		ft_right(ft_new_array(argv[1]));
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
