/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:13:31 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/08 21:03:30 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define ITILS_H
# include <stddef.h>

typedef struct s_flagscode
{
	char	opt;
	int	comb;
}		t_flags;

typedef struct s_intruction
{
	int	opt;
	int	lt;
	char	spec;
}
		t_instruction;
#endif

