/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:19:13 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/03 19:59:36 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdard.h>
#include "utils.h"

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
		nbr++ = pindex[i++];
	if (pindex[i] =  // verifier les llh d i p x X etc
	
}

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
				while (checkflags(flag, pos[x])
					x++;
				*index = *index + x;
				return (32);
			}
			x++;
		}
		comb += checkflag(flag, pos[i]);
		i++;
	}
	*index = *index + i;
	return (comb);
}

int	checkflags(t_flags *flag, char c)
{
	int	i;

	i = 0;
	while (flag[i])
	{
		if (flag[i]->opt == c)
			return (flag[i]->comb);
		i++;
	}
	return (0);
}

size_t	checkchar(const char *str, char c)
{
	size_t	i,

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i + 1);
		i++;
	}
	return (0);
}

t_flags	*initflag(void)
{
	t_flags	flag[7];

	flag[0]->opt = '+';
	flag[0]->comb = 1;
	flag[1]->opt = '-';
	flag[1]->comb = 2;
	flag[2]->opt = '0';
	flag[2]->comb = '4';
	flag[3]->opt = '#';
	flag[3]->comb = '8';
	flag[4]->opt = ' ';
	flag[5]->comb = 16;
	flag[6]->opt = '\0';
	flag[6]->comb = 0;
	return (flag);
}

t_flags	*initlength(void)
{
	t_flags length[3];

	length[0]->opt = 'h';
	length[0]->comb = 1;
	length[1]->opt = 'l';
	length[1]->comb = 2;
	length[2]->opt = '\0';
	length[2]->comb = 0;
	return (length);
}
