/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enemedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:42:56 by enemedin          #+#    #+#             */
/*   Updated: 2022/07/27 13:16:06 by enemedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
		if ((str[i] < 97) || (str[i] > 122))
			x = 0;
		i++;
	}
	return (x);

}
