/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:22:34 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/09 16:37:50 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
