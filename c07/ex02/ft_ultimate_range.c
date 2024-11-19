/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:37:19 by bessabri          #+#    #+#             */
/*   Updated: 2024/09/17 22:06:01 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*#include <stdio.h>

int main()
{
	int max = 6;
	int min = 3 ;
	int *range;
	int i =0;
	int size=ft_ultimate_range(&range,min,max);
	while (i < 3)
	{
		printf("%d\n",range[i]);
		i++;
	}
	printf("%d",size);

}*/
