#include <stdio.h>
#include <unistd.h>

int	ft_length(char *argv)
{
	int i;
	i=0;
	while (argv[i] != '\0')
		i++;
	return(i); 
}

void	ft_print_argv(char *argv)
{
	int i=0;
	while (argv[i] != '\0')
	{
		write(1,&argv[i],1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc ==2)
	{
		ft_print_argv(argv[1]);
	}
	return (0);

}
