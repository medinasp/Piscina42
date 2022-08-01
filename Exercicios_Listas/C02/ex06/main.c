#include<stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	//codigo para verificar caracteres especificos na tabela ascii
/*
	int x;
	int y;
	int z;
	int w;
	int t;

	x = 256;
	y = 257;
	z = 127;
	w = 95;
	t = 96;

		printf("Posicao 256, => %c \n", x);
		printf("Posicao 257, => %c \n", y);
		printf("Posicao 127, => %c \n", z);
		printf("Posicao 95, => %c \n", w);
		printf("Posicao 96, => %c \n", t);
*/
	char printable[] = "c@ract3res_printaveis-@#$@%$%&";
	char *print;
	print = printable;

	char notprint[] = "contem 8 caracteres nao print, que sao os espacos:w:";
	char *notp;
	notp = notprint;
	
		printf("Printaveis = 1, nao printaveis = 0\n");
		printf("%s - %d \n", printable, ft_str_is_printable(print));
		printf("%s - %d \n", notprint, ft_str_is_printable(notp));
}
