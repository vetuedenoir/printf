/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:18:21 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/10 19:39:05 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_s_instruct(t_instruction code, char *str)
{
	if (code->precision)
	{
		return (ft_putnstr(str, code->nombre));
	}
	return (ft_putnstr(str, -1));
}

int	ft_p_instruct(t_instruction code, unsigned long point)
{
	if (!point)
	{
		write(1, "nil", 3);
		return (3);
	}
	else
	{
		write(1, "0x", 2);
		return (2 + ft_putnbr_base(point, "0123456789abcdef"));
	}
}

int	ft_di_instruct(t_instruction code, va_list ap)
{
	char	decopt[6];

	decopt = memset(decopt, 0, 6);
	decopt = decodeur(decopt, code->flags);

	}
}

int	ft_u_instruct(t_instruction code, va_list ap)	// + pas a gerer
{

}

int	ft_xX_instruct(t_instruction code, va_list ap)
{
	
}

char	*decodeur(char *str, char opt)
{
	while (opt)
	{

		str[i] = opt % 2;
		opt = opt >> 1;
	}
	return (str);
}
