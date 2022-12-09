/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:19:13 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/09 14:47:43 by kscordel         ###   ########.fr       */
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
	while (checkflags(flag, pos[i]) && pos[i])
	{
		x = i + 1;
		while (checkflags(flag, pos[x]), pos[x])
		{
			if (pos[i] == pos[x])
			{
				while (checkflags(flag, pos[x]))
					x++;
				*index = *index + x;
				return (OVER_FLAG);
			}
			x++;
		}
		comb += checkflag(flag, pos[i]);
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

int	checkflags(t_flags *flag, char c)
{
	int	i;

	i = 0;
	while (flag[i].opt)
	{
		if (flag[i].opt == c)
			return (flag[i].comb);
		i++;
	}
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

t_flags	*initflag(void)
{
	t_flags	iflag[7];

	iflag[0].opt = '-';
	iflag[0].comb = 1;
	iflag[1].opt = '+';
	iflag[1].comb = 2;
	iflag[2].opt = ' ';
	iflag[2].comb = '4';
	iflag[3].opt = '#';
	iflag[3].comb = '8';
	iflag[4].opt = '0';
	iflag[5].comb = 16;
	iflag[6].opt = '.';
	iflag[6].comb = 32;
	iflag[7].opt = '\0';
	iflag[7].comb = 0;
	return (iflag);
}

t_flags	*initlength(void)
{
	t_flags ilength[3];

	ilength[0].opt = 'h';
	ilength[0].comb = 1;
	ilength[1].opt = 'l';
	ilength[1].comb = 2;
	ilength[2].opt = '\0';
	ilength[2].comb = 0;
	return (ilength);
}
