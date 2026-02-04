/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbr_unsigned_fd.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:02:24 by jfox              #+#    #+#             */
/*   Updated: 2025/12/03 10:10:27 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	get_length(unsigned int n)
{
	unsigned int	digit;

	digit = 0;
	if (n < 0)
		n = n * -1;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

int	printf_putnbr_unsigned_fd(unsigned int n, int fd)
{
	int	i;

	i = get_length(n);
	if (n >= 10)
	{
		printf_putnbr_unsigned_fd((n / 10), fd);
	}
	printf_putchar_fd(((n % 10) + '0'), fd);
	return (i);
}
