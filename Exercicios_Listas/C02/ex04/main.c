#include<stdio.h>
int ft_str_is_lowercase(char *str);

int main()
{
	char	string[] = "tudominusculo";
	char	*str;

	str = string;

	char	maiusc[] = "algum maiUsculo";
	char	*maiu;

	maiu = maiusc;

	char vazio[] = "";
	char *vaz;

	vaz = vazio;

	printf("\n1 = tudo minusculo\n0 = contem maiusculo ou vazio\n\n");
	printf("%s : %d\n", string, ft_str_is_lowercase(str));
	printf("%s : %d\n", maiusc, ft_str_is_lowercase(maiu));
	printf("Vazio : %d\n", ft_str_is_lowercase(vaz));
	return (0);
}
