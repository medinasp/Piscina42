#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(){
	char origem[] = "This is a source string.";
	char destino[] = "This is a destiny string.";
	char *dest;
	printf("\nAntes:\nOrigem: %s\nDestino: %s", origem, destino);
    dest = ft_strcpy(destino, origem);
	printf("\nDepois:\nOrigem: %s\nDestino:%s\n", origem, dest);
	return (0);
}

/*
	Aqui recebemos um vetor "source" com uma string e outro "destiny" com outra string.
	Criamos um ponteiro "*dest"

	Aí chamamos a função que copia o efeito da função nativa "strcpy"

	Nossa função copia o conteúdo do segundo argumento no primeiro usando um
	while, percorrendo o vetor e substituindo caracter por caracter fecha a última 
	posição, fora do while, com um '\0' e depois da a saida em um novo vetor "dest"

*/
