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
	t_flags	*flag;
	int	opt;
	char	*nbr;
	size_t	i;
	int	x;

	flag = initstruct;
	nbr = calloc(11, sizeof(char));
	i = 0;
	x = 0;
	opt = 0;
	// fonction pour verifier qu il n'y a pas le meme flags 2 fois ou plus
	while (checkflags(flag, pindex[++i]))
	{
		opt += checkflags(flag, pindex[i]);
						// on verifira peut etre si il faut verifier si 0 est sortie
	}
	while (pindex[i] >= '0' && pindex[i] <= '9' && x < 10)
		nbr[x++] = pindex[i++];
	
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

t_flags	*initstruct(void)
{
	t_flags	flag[6];

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
	return (flag);
}
