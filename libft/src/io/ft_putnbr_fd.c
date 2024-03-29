/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-wij <mvan-wij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 12:39:22 by mvan-wij      #+#    #+#                 */
/*   Updated: 2021/02/24 17:18:26 by mvan-wij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	pow;
	int	divided;
	int	len;

	pow = 1;
	while (n / pow / 10 != 0)
		pow *= 10;
	if (n < 0)
		ft_putchar_fd('-', fd);
	len = 0;
	while (pow != 0)
	{
		divided = n / pow % 10;
		if (n < 0)
			ft_putchar_fd('0' - divided, fd);
		else
			ft_putchar_fd('0' + divided, fd);
		pow /= 10;
		len++;
	}
	return (len);
}
