#include <stdio.h>
int ft_strlen(char *str); 



int main(void)
{
	char *str;
	int n;
	str = "Quantidade de caracteres";
	n = ft_strlen(str);
	printf("Quantidade de caracteres= %d", n);
}

/*
    Começamos criando nosso ponteiro *str e criamos uma variável n que receberá o total de caracteres
    Definimos a string desejada no str e chamamos a função que passará o vetor com a string e depois receberá o valor de n
    Iniciamos a variável qt na posição 0 
    Começamos um while com o vetor que será percorrido até a condição for diferente de '\0' que indica o fim do vetor
    Na medida que o ponteiro vai correndo p fim do vetor, ele incrementa a variável qt, que ao chegar no fim, terá o número total de 
    caracteres, baseado na numeração final do vetor.
    Essa variável retornada da função, é recebida na variável "n" do main e a partir dela temos a quantidade de caraceres pedida no exercício
    
*/
