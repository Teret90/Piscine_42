/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terterol <terterol@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:57:07 by terterol          #+#    #+#             */
/*   Updated: 2024/11/15 12:38:49 by terterol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	
	int i = 0;
	int position;

	while (i < size/2)
	{
		position = tab[i];
		tab[i] = tab[size -1 -i];
		tab[size-1-i] = position;
		i++;
	}	
	
}

int	main()
{
	int tab[]={1,2,3,4,5};
	int size=5;
	ft_rev_int_tab(tab,size);
	while ( 
		int i= 0;
		i < size;
		i++;)
		{
		printf("Reverse tab: %d ", tab[i]);
		}
	return(0);
}
