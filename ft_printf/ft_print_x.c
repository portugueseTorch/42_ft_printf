/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-cruz <gda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:30:06 by gda-cruz          #+#    #+#             */
/*   Updated: 2022/11/09 18:35:20 by gda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int num)
{
	int		counter;
	char	*base;

	counter = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		counter += ft_print_x(num / 16);
	counter += write(1, &base[num % 16], 1);
	return (counter);
}
