#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int *nbr;
	int a;
	nbr = &a;
	ft_ft(nbr);
	printf("Posicao Memoria: %p\n", nbr);
	printf("Numero Valor: %d\n", *nbr);
}

/*cria o ponteiro nbr, aponta para a variável "a" e o envia para a função, que 
recebe e atribui o valor 42 para o espaço na memória*/
