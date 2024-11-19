/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:43:11 by bessabri          #+#    #+#             */
/*   Updated: 2024/09/18 22:38:03 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an even number of arguments.\n"

# define SUCCESS 0
# define EVEN even

typedef int	t_bool;

static inline t_bool	even(int nbr)
{
	if (nbr % 2 == 0)
		return (0);
	else
		return (1);
}
#endif
