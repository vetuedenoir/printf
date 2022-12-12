#include "printf.h"

/* ecrit size caracteres et renvoie le nombre de caracteres ecrit */

int	ft_putnstr(char *str, int size)
{
	int	t;

	t = ft_strlen(str);
	if (size > t)
	{
		write(1, str, t);
		return(t);
	}
	else
	{
		write(1, str, size);
		return (size);
	}
}

int	ft_putnbrx(int nbr)
{
	
}

int	ft_putnbrxl(long nbr)
{
	
}
