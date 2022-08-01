#include<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
    int *********nbr;
    int ********nbra;
    int *******nbrb;
    int ******nbrc;
    int *****nbrd;
    int ****nbre;
    int ***nbrf;
    int **nbrg;
    int *nbrh;
    
    int a = 10;

    nbr = &nbra;
    nbra = &nbrb;
    nbrb = &nbrc;
    nbrc = &nbrd;
    nbrd = &nbre;
    nbre = &nbrf;
    nbrf = &nbrg;
    nbrg = &nbrh;
    nbrh = &a;

    printf("Endereço Antes %p: ", nbr);
	printf("Valor Antes %d: \n", *********nbr);

    ft_ultimate_ft(nbr);

    printf("Endereço Depois %p: ", nbr);
	printf("Valor Depois %d: ", *********nbr);
    
    }

/*nbr está apontado para o nbra,
que está apontado para o nbrb,
que está apontado para o nbrc,
que está apontado para o nbrd,
que está apontado para o nbre,
que está apontado para o nbrf,
que está apontado para o nbrg,
que está apontado para o nbrh,
que está apontado para o a que é 10.

Aí vc manda o ponteiro de nbr para a função
A função recebe e altera o valor da memória onde o endereço está apontando para 42
*/