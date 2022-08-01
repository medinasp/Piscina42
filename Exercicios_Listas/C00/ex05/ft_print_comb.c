/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_V.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enemedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:06:09 by enemedin          #+#    #+#             */
/*   Updated: 2022/07/21 15:06:14 by enemedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar_5(char c);
void	ft_print_result(int x, int y, int z);

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_result(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_result(int x, int y, int z)
{
	ft_putchar_5(x + '0');
	ft_putchar_5(y + '0');
	ft_putchar_5(z + '0');
	if (x < 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_putchar_5(char c)
{
	write(1, &c, 1);
}
