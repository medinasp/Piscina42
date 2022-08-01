#include <stdio.h>
int ft_str_is_alpha(char *str);
int main(){
    char string[] = "Thisisjustamockstring";
    char *str;
    str = string;

    char weird[] = "Thís ïz $a$ #weird# @@@ string!!!";
    char *wei;
    wei = weird;

    char empty[] = "";
    char *emp;
    emp = empty;

    printf("\n1 = Alphabetical\n0 = Weird\n\n");
    printf("%s : %d\n", string, ft_str_is_alpha(str));
    printf("%s : %d\n", weird, ft_str_is_alpha(wei));
    printf("Empty : %d\n\n", ft_str_is_alpha(emp));

    return (0);
}

/*Aqui declaramos os vetores e ponteiros que serão enviados para ser analisados pela nossa função:
string, weird e empty

Nossa função recebe o vetor contendo a string
Inicia duas variáveis para auxiliar a percorrer os vetores.
Inicia um if para verificar se a posição do caracter na tabela asc está antes da 65 ou depois da 90
E outro if dentro desses para verificar se dentre os que passaram de 90, vao so ate o 97, ou passam dos 122.

Ou seja, se o caracter estiver nos seguintes intervalos:
0 a 65
90 a 97
122 em diante.
Significa que estas posições da tabela asc contém caracteres que não são alfabéticos e serão marcados como 0

Se não estiverem neste intervalo, passarão direto pelos ifs e não alterará o valor de x e então retornará o valor original "1"
*/


