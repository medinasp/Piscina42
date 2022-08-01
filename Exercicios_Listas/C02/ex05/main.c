printa#include<stdio.h>

int ft_str_is_uppercase(char *str);

int main ()
{
	// consultar tabela asc:
	/*
	int i;
	i = 0;

	while ( i < 260)
	{
		printf("Posicao %i %c\n",i,i);
		i++;
	}
	return (i);
	*/

	char maius[] = "TUDOMAIUSCULO";
	char *mai;
	mai = maius;

	char minus[] = "ALGuMMINUSCULO";
	char *min;
	min = minus;

	printf("TUDO MAIUSCULO = 1, ALGUM MInUSCULO = 0\n");
	printf("%s - %d\n", maius, ft_str_is_uppercase(mai));
	printf("%s - %d\n", minus, ft_str_is_uppercase(min));
}

/*
	Explicacao é a mesma das anteriores, percorrer os vetores para encontrar e diferenciar os caracteres pedidos de acordo com a posicao na tabela asc
   No inicio entre comentarios está um codigo para puxar a relacao de posicoes da tabela asc para auxilio.	
*/
