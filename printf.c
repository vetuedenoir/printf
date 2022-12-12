#include "printf.h"

int	ft_whichinstruct(t_instruction code, va_list ap)
{
	int	len;

	len = 0;
	if (code->specifier == 'c')
	{
		write(1, va_arg(ap, char), 1);
		len++;
	}
	if (code->specifier == 's')
		ft_s_intruct(code, va_arg(ap, char *));
	if (code->specifier == 'p')
		ft_p_instruct(code, va_arg(ap, unsigned long));
	if (code->specifier == 'd' || code->specifier == 'i')
		ft_di_instruct(code, ap);
	if (code->specifier == 'u')
		ft_u_instruct(code, ap);
	if (code->specifier == 'x' || code->specifier == 'X')
		ft_xX_instruct(code, ap);
	if (code->specifier == '%')
	{
		write(1, '%', 1);
		len++;
	}
	return (len);
}

int	ft_formflags(char *pindex, int *len, va_list ap)
{
	t_instruction	code;
	size_t	i;

	i = 0;
	code->flags = ft_verifflags(&pindex[i], &i, g_flag);	// on verifira peut etre si il faut verifier si 0 est sortie
	code->width = ft_verifnbr(&pindex[i], &i);		// passer tout les nombre ??? message d'erreur
	if (pindex[i] == '.');
	{
		code->precision = 1;					// precision    .number
		i++;
		code->number = ft_verifnbr(&pindex[i], &i);
	}
	else
		code->precision = 0;
	code->length = ft_veriflength(pindex[i], i, flag);		// verifier les llh
	code->specifier = checkchar("cspdiuxX%", pindex[i]);
	if (code->specifier)
	{
		if (code->flags != OVER_FLAG)
			*len = *len + ft_wichinstruct(code, ap);	// fonction qui ecrit et tout
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

