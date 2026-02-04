/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putstr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:35:38 by jfox              #+#    #+#             */
/*   Updated: 2025/11/15 14:48:43 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	printf_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
	{
		printf_putstr_fd("(null)", fd);
		return (6);
	}
	i = ft_strlen(s);
	write(fd, s, i);
	return (i);
}
