#include <stdio.h>
void	ft_swap(int *a, int *b);

int		main(void)
{
	int *a;
	int *b;
	int c = 13;
	int d = 29;
	
	a = &c;
	b = &d;
	printf("Endereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
	ft_swap(a, b);
	printf("\nEndereço de a = %p\n", a);
	printf("Valor de a = %d\n", *a);
	printf("Endereço de b = %p\n", b);
	printf("Valor de b = %d\n", *b);
}

/*
	envia os ponteiros apontando para os valores das 
	memórias de c e d. (13 e 19)

	A função recebe estes valores, salva o valor de a(c) na variável swap,
	redefine para o ponteiro a o valor do ponteiro b(d),
	e redefine o ponteiro b com o valor que ficou guardado em swap.
*/