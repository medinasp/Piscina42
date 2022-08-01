#include <stdio.h>
char *ft_strlowcase(char *str);
int main(){
	char string[] = "THIS USED TO BE UPPERCASE";
	char *str;
	str = string;

	char weird[] = "thishassomeUPPERCASE";
	char *wei;
	wei = weird;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\n\nBefore: %s\n", string);
	printf("After : %s\n\n", ft_strlowcase(str));
	printf("Before: %s\n", weird);
	printf("After : %s\n\n", ft_strlowcase(wei));
	printf("Empty : -%s-\n\n", ft_strlowcase(emp));
	return (0);
}
