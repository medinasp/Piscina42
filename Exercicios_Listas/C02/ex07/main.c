#include <stdio.h>
char	*ft_strupcase(char *str);
int main()
{
	char string[] = "lowercase";
	char *str;
	str = string;

	char change[] = "uppercases"; 
	char *chg;
	chg = change;

	char empty[] = "";
	char *emp;
	emp = empty;

	printf("\nBefore: %s\n", string);
	printf("\nAfter: %s\n\n", ft_strupcase(str));
	printf("\nBefore: %s\n", change);
	printf("\nAfter: %s\n\n", ft_strupcase(chg));
	printf("\nEmpty: %s\n", ft_strupcase(emp));

	return (0);
}
