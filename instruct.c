/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:18:21 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/09 14:47:37 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_s_instruct(t_instruction code, char *str)
{
	if (code->opt / 32)
	{
		return (ft_putnstr(str, nbr));
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
	char	*decopt;

	decopt = decodeur(code->opt);
	if (decopt[6] || decopt[5] || code->nbr)
	{
		if (code->lt == 1 || code->lt == 0)
			str = ft_itoa(va_arg(ap, int));
		if (code->lt == 2)
			str = ft_itoal(va_arg(ap, long));
		if (code-> == 4)
			str = ft_itoall(va_arg(ap, long long));

	}
}

int	ft_u_instruct(t_instruction code, va_list ap)	// + pas a gerer
{

}

int	ft_xX_instruct(t_instruction code, va_list ap)
{
	
}

char	*decodeur(int opt)
{
	int	i;
	char	str[7];
	int	diviseur;

	i = 6;
	str[i--] = '\0';
	diviseur = 64;
	while (i--)
	{
		opt %= diviseur;
		diviseur /= 2;
		str[i] = opt / diviseur;
	}
	return (str);
}
