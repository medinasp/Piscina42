/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enemedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:20:04 by enemedin          #+#    #+#             */
/*   Updated: 2022/07/27 09:47:07 by enemedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_comb2(void)
{
	char	c;
	int		x;
	int		y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 98)
		{
			c = ((x / 10) + '0');
			write(1, &c, 1);
			c = ((x % 10) + '0');
			write(1, &c, 1);
			write(1, " ", 1);
			c = ((y / 10) + '0');
			write(1, &c, 1);
			c = ((y % 10) + '0');
			write(1, &c, 1);
			write(1, ", ", 2);
			y++;
		}
		x++;
	}
	write(1, "98 99", 5);
}

/*
 Esse não deu certo por causa deste write separado que eu fiz.
 Eu coloquei o segundo while, do y, até 98, então ficou faltando o 99 em todas as sequencias, exceto na última porque eu coloquei o write separado.
 */
