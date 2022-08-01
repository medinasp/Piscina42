/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enemedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:04:34 by enemedin          #+#    #+#             */
/*   Updated: 2022/07/27 10:11:14 by enemedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)


#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (*(str + ++i))
		;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	if (size == 0)
		return (ft_strlen(src));
	len = 0;
	while (size > 1 && *src)
	{
		*dest = *src;
		++dest;
		++src;
		--size;
		++len;
	}
	*dest = 0;
	while (*dest || *src)
		if (*src)
		{
			++src;
			++len;
		}
	return (len);
}
