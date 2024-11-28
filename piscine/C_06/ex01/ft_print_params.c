/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terterol <terterol@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:21:57 by terterol          #+#    #+#             */
/*   Updated: 2024/11/28 17:17:38 by terterol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	if (argc >= 0)
	{
		while (x < argc)
		{
			while (argv[x][i] != '\0')
			{
				write(1, &argv[x][i], 1);
				i++;
			}
			write(1, "\n", 1);
			i = 0;
			x++;
		}
	}
	return (0);
}
