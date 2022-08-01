#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main ()
{
    char    source[] = "Source here.Veryfy length test both ttru";
    char    change[] = "Save placessssss. test full base q";
    char     *src;
    char    *dest;
    char    *goal;

    src = source;
    dest = change;

	printf("\n00:-%s", src);

    goal = ft_strncpy(dest, src, 10);
    printf("\n\n10:-%s-", goal);

    goal = ft_strncpy(dest, src, 20);
    printf("\n\n20:-%s-", goal);

    goal = ft_strncpy(dest, src, 30);
    printf("\n\n30:-%s-", goal);
}

/*
	Criamos os vetores source e change e seus ponteiros
	chamamos a nossa funcao de acordo com o pedido
	A funcao recebe os dados:
	dest =>	vetor que receberá os dados copiados da fonte
	src  =>	vetor fonte
	n	 =>	inteiro que será definido como limite até onde o ponteiro percorrerá os vetores.
	Cria outra variável unsigned e define valor 0
	Inicia um while percorrendo o vetor "src" e a variavel iniciada "i" enquanto for menor que "n"
	atribui o valor de src na posição "i" a posição "i" do vetor dest
	Inicia outro while para o caso de "n" ser maior que "i" para copiar o restante além do que 
	foi definido na primeira chamada "n".
*/
