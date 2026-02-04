/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <jfox.42angouleme@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:51:05 by jfox              #+#    #+#             */
/*   Updated: 2025/11/15 16:39:34 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		printf_putchar_fd(char c, int fd);
int		printf_putnbr_fd(int n, int fd);
int		printf_putnbr_unsigned_fd(unsigned int n, int fd);
int		printf_putnbr_hex_fd(unsigned int n, char *base, int fd);
int		printf_putvoid(unsigned long n, char *base, int fd);
size_t	printf_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif
