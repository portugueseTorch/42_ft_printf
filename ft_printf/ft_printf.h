/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-cruz <gda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:31:25 by gda-cruz          #+#    #+#             */
/*   Updated: 2022/11/10 14:19:49 by gda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
char	*ft_strchr(const char *s, int c);
void	*ft_redirect(char c);
void	*ft_redirect_flags(char c, char d);
int		ft_print_c(char c);
int		ft_print_i(int n);
int		ft_print_d(int n);
int		ft_print_s(char *s);
int		ft_print_p(unsigned long int mem);
int		ft_print_x(unsigned int num);
int		ft_print_ux(unsigned int num);
int		ft_print_u(unsigned int n);

int		ft_flag_plus(int n);
int		ft_flag_space(int n);
int		ft_flag_hash_l(unsigned int n);
int		ft_flag_hash_u(unsigned int n);

#endif