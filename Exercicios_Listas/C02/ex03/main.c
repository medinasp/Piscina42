#include <stdio.h>
int ft_str_is_numeric(char *str);
int main(){
    char string[] = "86797860974353";
    char *str;
    str = string;

    char notnumb[] = "34236434256453v";
    char *nnumb;
    nnumb = notnumb;

    char vazio[] = "";
    char *vaz;
    vaz = vazio;

    printf("\n1 = OnlyNumber\n0 = NotOnlyNumbers\n\n");
    printf("%s : %d\n", string, ft_str_is_numeric(str));
    printf("%s : %d\n", notnumb, ft_str_is_numeric(nnumb));
    printf("Vazio : %d\n\n", ft_str_is_numeric(vaz));
    return (0);
}
/*
 Este é igual ao exercício anterior, só que a cadeia não numérica buscada está até a posicao 48 da tabela asc
 e recomeca depois da posicao 57.
 */
