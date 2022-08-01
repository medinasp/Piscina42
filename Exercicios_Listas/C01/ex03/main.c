#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a = 10;
	int b = 2;
	int *div = &a;
	int *mod = &b;

	printf("Endereço Div = %p\n", div);
	printf("Valor Div = %d\n", *div);
	printf("Endereço Mod = %p\n", mod);
	printf("Valor Mod = %d\n", *mod);	
 
	ft_div_mod(a, b, div, mod);

	printf("\nEndereço Div = %p\n", div);
	printf("Valor Div (depois da operação) = %d\n", *div);
	printf("Endereço Mod = %p\n", mod);
	printf("Valor Mod (depois da operação) = %d\n", *mod);	
}

/*
Aqui eu vou enviar as variáveis "a" e "b", e os ponteiros *div e *mod
apontando para "a" e "b".
A função recebe estes dados e faz as operações de módulo e divisão entre eles
*/
