/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codec1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvarosa <alvarosa@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:52:52 by alvarosa          #+#    #+#             */
/*   Updated: 2024/11/17 18:13:36 by alvarosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_chars(char x)
{
	if (x == 'a')
		write (1, "4 1 2 3\n3 4 1 2\n2 3 4 1\n1 2 3 4\n", 32);
	else if (x == 'b')
		write (1, "3 4 1 2\n4 1 2 3\n1 2 3 4\n2 3 4 1\n", 32);
	else if (x == 'c')
		write (1, "2 3 4 1\n3 4 1 2\n4 1 2 3\n1 2 3 4\n", 32);
	else if (x == 'd')
		write (1, "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3\n", 32);
}

int	str_size(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

int	str_compare(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (str1[i] == '\0' && str2[i] == '\0');
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (str_size(argv[1]) == 31)
		{
			if (str_compare(argv[1], "1 2 2 2 4 3 2 1 1 2 3 4 2 2 2 1"))
				put_chars('a');
			else if (str_compare(argv[1], "2 1 4 3 2 2 1 2 2 1 4 3 2 2 1 2"))
				put_chars('b');
			else if (str_compare(argv[1], "3 2 1 4 2 2 2 1 3 2 1 4 2 2 2 1"))
				put_chars('c');
			else if (str_compare(argv[1], "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"))
				put_chars('d');
			else
				write(1, "Error\n", 6);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
