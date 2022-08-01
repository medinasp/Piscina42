#include<stdio.h>
void ft_putchar(char c);
void ft_print_alphabet(void);
void ft_print_reverse_alphabet(void);
void ft_print_numbers(void);
void ft_is_negative(int n);
void ft_print_comb(void);
void ft_print_result(int x, int y, int z);
void ft_putchar_5(char c);
void ft_print_comb2(void);

void PrintLine(void)
{
	printf ("\n");
}

 
int main(void)
{
	printf("exercicio 0 - Imprimir letra c usando write\n");
	ft_putchar('c');
	PrintLine();
	PrintLine();
	printf("exercicio 1 - imprimir alfabeto\n");
	ft_print_alphabet();
	PrintLine();
	PrintLine();
	printf("exercicio 2 - imprimir alfabeto em ordem invertida\n");
	ft_print_reverse_alphabet();
	PrintLine();
	PrintLine();
	printf("exercicio 3 - imprimir todos números em ordem crescente\n");
	ft_print_numbers();
	PrintLine();
	PrintLine();
	printf("exercicio 4 - imprimir P para positivo ou N para negativo\n");
	ft_is_negative(1);
	PrintLine();
	PrintLine();
	printf("exercicio 5 - mostrar em ordem crescente, todas as diferentes combinações de três números diferentes em ordem crescente\n");
	ft_print_comb();
	PrintLine();
	PrintLine();
	printf("exercicio 6 - Escreva uma função que mostre todas as diferentes combinações de dois números entre 0 e 99, em ordem crescente.");
	PrintLine();
	ft_print_comb2();
	PrintLine();
	printf ("fim");
}
