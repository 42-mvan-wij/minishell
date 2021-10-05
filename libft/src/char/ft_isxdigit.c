/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isxdigit_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-wij <mvan-wij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 15:17:56 by mvan-wij      #+#    #+#                 */
/*   Updated: 2021/06/22 13:01:38 by mvan-wij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isxdigit(int c)
{
	return (ft_isdigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'));
}
