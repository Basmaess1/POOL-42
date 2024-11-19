/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bessabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:43:31 by bessabri          #+#    #+#             */
/*   Updated: 2024/09/18 22:39:11 by bessabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS abs

static inline int	abs(int value)
{
	int	result;

	if (value < 0)
	{
		result = -value;
	}
	else
	{
		result = value;
	}
	return (result);
}

#endif
