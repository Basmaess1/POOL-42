/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:36:15 by bessabri          #+#    #+#             */
/*   Updated: 2024/09/17 22:01:37 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*#include <stdio.h>
int	main()
{
	int min= 5;
	int max= 10;
	int *tab = ft_range(min,max);
	for (int i = 0; i< (max - min);i++)
		printf("%d\n",tab[i]);
}*/
