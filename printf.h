/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:21:55 by kscordel          #+#    #+#             */
/*   Updated: 2022/12/10 19:23:53 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define PRINTF_H
# define OVER_FLAG = 64;

typedef struct s_intruction
{
	int	flags;
	int	width;
	char	precision;
	int	number;
	int	length;
	char	specifier;
}
		t_instruction;
#endif
