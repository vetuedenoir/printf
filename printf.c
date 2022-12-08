#include "printf.h"

static const t_flags	g_flag = initflag();
static const t_flags	g_length = initlength();

int	ft_whichputs(int opt, int lt, int nbr, char spec)
{
	if (	
}

int	ft_formflags(char *pindex, int *len, va_list ap)
{
	int	opt;
	int	lt;
	char	*nbr;
	size_t	i;

	nbr = ft_calloc(11, sizeof(char));
	i = 0;
	opt = ft_verifflags(&pindex[i], i, g_flag);	// on verifira peut etre si il faut verifier si 0 est sortie
	while (pindex[i] >= '0' && pindex[i] <= '9' && nbr)
	{
		*nbr = pindex[i++];
		nbr++;
	}
	while (pindex[i] >= '0' && pindex[i] <= '9')	// passer tout les nombre ??? message d'erreur ?
		i++;
	lt = ft_veriflength(pindex[i], i, flag);	// verifier les llh
	if (ckeckchar("cspdiuxX%"pindex[i]))
	{
		ft_wichputs(opt, lt, ft_atoi(nbr), checkchar("cspdiuxX%");// fonction qui ecrit et tout
		return (i);
	}
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list			ap;
	int			i;
	int			len;
 	
 	va_start(ap, format);
	if (!format)
		return (0);
	while (format[i])
	{
		if (format[i] == '%')
		{ 
			i += ft_formflag(&format[i], &len, ap);	// 

		}
		ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

