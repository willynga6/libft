#include "/home/w/Bureau/libft/include/libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	if (!str)
		return ;
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
	write(fd, "\n", 1);
}
