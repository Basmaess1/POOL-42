/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:26:18 by bessabri          #+#    #+#             */
/*   Updated: 2024/09/17 21:39:27 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_cpy(char *s, char **strs, char *sep, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*s++ = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				*s++ = sep[j++];
		}
		i++;
	}
	*s = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*s;
	int		i;

	if (size == 0)
		return (malloc(sizeof(char)));
	i = 0;
	len = ft_strlen(sep) * (size - 1);
	while (i < size)
		len = len + ft_strlen(strs[i++]);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	ft_cpy(s, strs, sep, size);
	return (s);
}
/*int	main(void)
{
	char	*strs[] = {"kk", "ls", "po"};
	char	sep[] = "--";
	char	*res;

	res = ft_strjoin(3, strs, sep);
	printf("%s", res);
	free(res);
	return (0);
}*/
