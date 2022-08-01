#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int     main(void)
{
	int *a;
	int *b;
	int c = 18;
	int d = 4;

	a = &c;
	b = &d;

	printf("O endereço do a é: %p\n", a);
	printf("O valor do a é: %d\n", *a);
	printf("O endereço do b é: %p\n", b);
	printf("O valor de b é: %d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("O endereço do a é: %p\n", a);
	printf("O valor do a / b é: %d\n", *a);
	printf("O endereço do b é: %p\n", b);
	printf("O valor de a mod b é: %d\n", *b);

}

/*
    aqui definimos os ponteiros "a" e "b", apontamos para os valores que estão nos endereços de
    "c" e "d" e os enviamos para a função com estes valores.

    A função os recebe e os utiliza para fazer os cálculos de divisão e módulo e depois os aponta
    para os resultados obtidos nas variáveis DIV e MOD
*/