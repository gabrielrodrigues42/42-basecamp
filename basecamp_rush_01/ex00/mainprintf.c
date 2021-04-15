
#include <unistd.h>
#include <stdio.h>

char	*ft_new_array(char *str);
char	*ft_up(char *str);
char	*ft_down(char *str);
char	*ft_left(char *str);
char	*ft_right(char *str);

int		main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_new_array(argv[1]);
		ft_up(ft_new_array(argv[1]));
		ft_down(ft_new_array(argv[1]));
		ft_left(ft_new_array(argv[1]));
		ft_right(ft_new_array(argv[1]));
		printf("%s\n", ft_new_array(argv[1]));
		printf("%s\n", ft_up(argv[1]));
		printf("%s\n", ft_down(argv[1]));
		printf("%s\n", ft_left(argv[1]));
		printf("%s\n", ft_right(argv[1]));
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
