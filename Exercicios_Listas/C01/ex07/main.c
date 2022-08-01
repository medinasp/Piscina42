#include <stdio.h>
void ft_rev_int_tab(int *tab, int size);

int        main(void)
{
    int tab[] = {2, 18, -33, -7, 8, 13, 4, 13};
    

    printf("Endereçamento 1: %p\n", tab);
    printf("Primeira tabela: \n");
    for(int j = 0; j < 8; j++) {
        printf("%d, ", tab[j]);
    }
    printf("\n");

    ft_rev_int_tab(tab, 8);

    printf("\nEndereçamento 2: %p\n", tab);
    printf("Segunda Tabela: \n");
    for(int i = 0; i < 8; i++) {
        printf("%d, ", tab[i]);
    }
}
/*
    Aqui nós enviamos um vetor de 8 números para nossa função
    Na função recebemos o ponteiro p o vetor e a quantidade de elementos.
    Iniciamos uma variável "i" na posição 0 e a variável "invert" que será usada p inverter as posições.

    Criamos um while para percorrer e alterar a posição dos elementos comaçando nos extremos do vetor e caminhando em direção ao meio como posição final
    
    Invert = tab [posição inicial]
    tab[posição inicial] = tab[posição final]
    tab [posicao final] = invert
    incrementa "i" para fazer o mesmo na próxima posição do vetor
*/