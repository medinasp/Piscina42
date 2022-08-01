/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enemedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:25:25 by enemedin          #+#    #+#             */
/*   Updated: 2022/07/21 16:44:42 by enemedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	char nome_cliente[] = "Fulano";
	char nome_cliente2[10];
	
	printf("Qual seu nome?");
	scanf("%s", nome_cliente2);
	printf("Nome com espaço reservado: %s, nome com espaço calculado automaticamente: %s\n", nome_cliente2,  nome_cliente);
	
	*nbr = 42;
}
