/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:01:49 by bessabri          #+#    #+#             */
/*   Updated: 2024/09/17 20:23:02 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		j;

	j = 0;
	while (src[j])
		j++;
	dest = malloc(sizeof(char) * (j + 1));
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%s\n",ft_strdup("hello ll"));
	printf("%s",strdup("hello ll"));
}*/
