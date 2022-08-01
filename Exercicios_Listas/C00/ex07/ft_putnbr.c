/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enemedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:09:42 by enemedin          #+#    #+#             */
/*   Updated: 2022/07/27 09:45:18 by enemedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	contador;
	int	nbase;
	int	pasc;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = (-1) * nb;
	}
	contador = 1;
	nbase = nb;
	while (nbase >= 10)
	{
		contador = contador * 10;
		nbase = nbase / 10;
	}
	while (contador >= 1)
	{
		pasc = (nb / contador);
		nb = nb % contador;
		pasc = pasc + 48;
		write(1, &pasc, 1);
		contador = contador / 10;
	}
}

/*
 Esse veio errado porque os inteiros vão de -214783648 ate 2147483648 e do jeito que eu fiz não alcançava o último número positivo, tinha que fazer uma condição exra especificamente para este número
 */
