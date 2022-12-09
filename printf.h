/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:21:55 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/09 14:29:00 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define PRINTF_H
# define OVER_FLAG = 64;

typedef struct s_flagscode
{
	char	opt;
	int	comb;
}		t_flags;

typedef struct s_intruction
{
	int	opt;
	int	nbr;
	int	lt;
	char	spec;
}
		t_instruction;
#endif
