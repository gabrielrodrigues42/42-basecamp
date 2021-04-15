/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:55:11 by gandrade          #+#    #+#             */
/*   Updated: 2021/04/04 16:55:14 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char letter);

void	ft_line(int x, char left, char side_horizontal, char right)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(left);
		}
		else if (i == x)
		{
			ft_putchar(right);
		}
		else
		{
			ft_putchar(side_horizontal);
		}
		i++;
	}
	ft_putchar('\n');
}

void	ft_side_wall(int x, int y)
{
	char	side_vertical;
	int		i;
	int		j;

	i = 1;
	j = 1;
	side_vertical = '*';
	while (i <= y - 2)
	{
		while (j <= x)
		{
			if (j == 1 || j == x)
			{
				ft_putchar(side_vertical);
			}
			else
			{
				ft_putchar(' ');
			}
			j++;
		}
		j = 1;
		i++;
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	char top_left;
	char top_right;
	char bot_left;
	char bot_right;
	char side_horizontal;

	top_left = '/';
	top_right = '\\';
	bot_left = '\\';
	bot_right = '/';
	side_horizontal = '*';
	ft_line(x, top_left, side_horizontal, top_right);
	ft_side_wall(x, y);
	if (y != 1)
	{
		ft_line(x, bot_left, side_horizontal, bot_right);
	}
}
