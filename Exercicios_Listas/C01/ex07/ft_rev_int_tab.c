/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enemedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 08:49:37 by enemedin          #+#    #+#             */
/*   Updated: 2022/07/24 08:53:08 by enemedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	invert;

	i = 0;
	while (i != size / 2)
	{
		invert = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = invert;
		i++;
	}
}
