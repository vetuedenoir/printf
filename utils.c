/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:19:13 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/10 19:38:56 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "utils.h"

int	ft_verifflags(char *pos, int *index, t_flags flag)
{
	int	i;
	int	x;
	int	comb;

	i = 0;
	comb = 0;
	while (parsflag(pos[i]) && pos[i]) 		// +   # 0 -
	{
		x = i + 1;
		while (parsflag(pos[x]), pos[x])	// +   # 0 -
		{
			if (pos[i] == pos[x])
			{
				while (parsflag(pos[x]))
					x++;
				*index = *index + x;
				return (OVER_FLAG);
			}
			x++;
		}
		comb += parsflag(pos[i]);
		i++;
	}
	*index = *index + i;
	return (comb);
}

int	ft_veriflength(char *pos, int *index, t_flags length )
{
	if (checkflags(flag, pos[0]) == 0)
		return (0);
	if (checkflags(flag, ppos[0]) == 1)
	{
		*i = *i + 1;
		return (1);
	}
	if (checkflags(flag, pos[0]) == 2 && checkflags(flag, pos[1]) == 2)
	{
		*i = i* + 2;
		return (4);
	}
	if (checkflags(flag, pos[0]) == 2)
	{
		*i = *i + 1;
		return (2);
	}
}

int	ft_verifnbr(char *pos, int *index)
{
	char	*nbr;
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (pos[0] >= '0' && pos[0] <= '9')
	{
		nbr = calloc(11, sizeof(char));
		while (pos[i] >= '0' && pos[i] <= '9' && i < 10)
		{
			*nbr = pos[i++];
			nbr++;
			*index = *index + 1;
		}
		while (pos[i] >= '0' && pos[i] <= '9')		// passer tout les nombre ??? message d'erreur ?
		{
			i++;
			*index = *index + 1;
		}
		nb = ft_atoi(nbr);
		free(nbr);
	}
	return (nb);
}

int	parsflag(char c)
{
	if (c == '-')
		return (1);
	if (c == '+')
		return (2);
	if (c == ' ')
		return (4);
	if (c == '#')
		return (8);
	if (c == '0')
		return (16);
	return (0);
}

char	checkchar(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (c);
		i++;
	}
	return (0);
}
