/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbr_hex_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:02:24 by jfox              #+#    #+#             */
/*   Updated: 2025/11/19 13:58:37 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_length(unsigned int n, int bs)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / bs;
		digit++;
	}
	return (digit);
}

int	printf_putnbr_hex_fd(unsigned int n, char *base, int fd)
{
	unsigned int	i;
	unsigned int	bs;
	char			*hex;

	bs = ft_strlen(base);
	hex = base;
	i = get_length(n, bs);
	if (n >= bs)
	{
		printf_putnbr_hex_fd((n / bs), base, fd);
	}
	printf_putchar_fd((hex[n % bs]), fd);
	return (i);
}
