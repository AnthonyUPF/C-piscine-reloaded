/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthtorr <anthtorr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:10:40 by anthtorr          #+#    #+#             */
/*   Updated: 2023/09/11 19:10:43 by anthtorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (ft_abs(Value))

static	inline	int	ft_abs(int Value)
{
	if (Value < 0)
	{
		return (-Value);
	}
	return (Value);
}
#endif
