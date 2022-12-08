/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:18:21 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/08 21:03:12 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_s_instruct(t_instruction code, int nbr, char *str)
{
	char	*copy;
	int	len;

	len = 0;
	copy = NULL;
	if (code->opt / 32)
	{
		len = ft_putnstr(str, nbr);
	}
	len = ft_putnstr(str, -1);
	return (len);

}

int	ft_p_instruct(t_instruction code, int nbr, unsigned long point)
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

int	ft_di_instruct(t_instruction code, int nbr, va_list ap)
{
	if (code->lt = 1)	//si c est un short

	if (
}

int	ft_u_instruct(t_instruction code, int nbr, va_list ap)	// + pas a gerer
{

}

int	ft_xX_instruct(t_instruction code, int nbr, va_list ap)
{
	
}
