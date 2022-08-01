#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size);

int        main(void)
{
    int tab[] = {5, -2, 18, 15, 14, 27, -12, 35 , 0 , 10, 10};
    

    printf("Endereço Tabela 1: %p\n", tab);
    printf("Valores Tabela 1: \n");
    for(int j = 0; j < 11; j++) {
        printf("%d, ", tab[j]);
    }
    printf("\n");

    ft_sort_int_tab(tab, 11);

    printf("\nEndereço Tabela 2: %p\n", tab);
    printf("Valores Tabela 2: \n");
    for(int i = 0; i < 11; i++) {
        printf("%d, ", tab[i]);
    }
}

/*
    Aqui enviamos o vetor e a quantidade de posições para a nossa função
    Na outra recebemos a função e colocamos no while
    While roda 1 enquanto for menor que o número de posições do vetor
    "j" é o valor de "i + 1", para comparar com o endereço imediatamente posterior.
    While dentro roda enquanto o "j" tb for menor que o número de posições do vetor
    If => comparamos a posição "1" com a posição "0"
    Caso a posição "1" seja menor que a "0":
        guardamos o valor da posição "0" na variável "aux".
        substituimos o valor da posição "0" pela posição da posição "1"
        na posição "1", colocamos o valor da posição "0" que ficou guardada na variável "aux".
        incrementamos "j" e voltamos para o if para comparar o "i" com a próxima posição de "j"
        Assim comparamos o primeiro elemento com todos os outros e substituimos quando atender a condição

    Quando comparar "i" posição 1, com todos "j" posição 2, incrementamos 1 em "i" e assim vamos comparar a posição 
    i, que agora é a posição "2", com todos os "j" novamente, até comparar a 2 com 11(size)

    E assim segue até i e j chegarem ao valor do size, neste exemplo é 11.
*/