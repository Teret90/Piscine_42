/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terterol <terterol@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:49:28 by terterol          #+#    #+#             */
/*   Updated: 2024/11/10 15:14:23 by terterol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	linea_ext(int x)
{
	int	posicion_x;

	posicion_x = 1;
	while (posicion_x < x || posicion_x == x)
	{
		if (posicion_x == 1 || posicion_x == x)
		{
			ft_putchar('o');
			posicion_x++;
		}
		else
		{
			ft_putchar('-');
			posicion_x++;
		}
	}
	ft_putchar('\n');
}

void	linea_int(int x)
{
	int	posicion_x;

	posicion_x = 1;
	while (posicion_x <= x)
	{
		if (posicion_x == 1 || posicion_x == x)
		{
			ft_putchar('|');
			posicion_x++;
		}
		else
		{
			ft_putchar(' ');
			posicion_x++;
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	posicion_x;
	int	posicion_y;

	posicion_x = 1;
	posicion_y = 1;
	if (x < 0 || y < 0)
	{
		return ;
	}
	else
	{
		while (posicion_y <= y)
		{
			if (posicion_y == 1 || posicion_y == y)
			{
				linea_ext(x);
			}
			else
			{
				linea_int(x);
			}
			posicion_y++;
		}
	}
}
