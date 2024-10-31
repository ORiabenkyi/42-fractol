/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oriabenk <oriabenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:42:09 by oriabenk          #+#    #+#             */
/*   Updated: 2024/10/13 14:54:51 by oriabenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
ssize_t	print_char(int fd, int c);
ssize_t	print_string(int fd, const char *str);
ssize_t	print_number(int fd, long c, const char *symbols, unsigned int base);
ssize_t	print_unumber(int fd, unsigned long num, const char *symbols,
			unsigned int base);
ssize_t	print_ptr(int fd, unsigned long p);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *income_str);

#endif