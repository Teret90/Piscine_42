/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terterol <terterol@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:27:03 by terterol          #+#    #+#             */
/*   Updated: 2024/11/19 18:14:56 by terterol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_int(int a, int *b)
{
	int c;
	c = a * *b;
	*b = c;
}

int	main(void)
{
	int b;
	b = 2;
	printf("Antes de cambiar el numero deberia ser 2 y es: %d\n", b);
	ft_int(8,&b);//Cuando pongo el & lo convierto en puntero y la funcion lo entiende como puntero a int;
	printf("Despues de multiplicar 2 + 8: %d\n", b);
	return (0);
}
