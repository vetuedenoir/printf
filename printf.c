#include <stdio.h>
#include <stdarg.h>

static const t_flags	g_flag = initflag();
static const t_flags	g_length = initlength();

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

