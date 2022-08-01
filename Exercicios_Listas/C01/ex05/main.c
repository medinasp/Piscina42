void	ft_putstr(char *str);

int		main(void)
{
	char *str = "String da Funcao";
	ft_putstr(str);
}

/*
    Aqui definimos o nosso ponteiro com a string e enviamos para nossa função ft_putstr.
    Aí recebemos o ponteiro na função.
    Criamos uma variável para definir o ponto de início
    Iniciamos um laço While para e colocamos a nossa string em um vetor
    A variável que criamos, "start", vai percorrer os endereços do vetor até
    encontrar a posição vazia que indica o fim do vetor e consequente fim
    da string, imprimindo o conteúdo de cada posição e assim formando a
    string desejada*/