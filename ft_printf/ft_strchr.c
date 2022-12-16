/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-cruz <gda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:50:54 by gda-cruz          #+#    #+#             */
/*   Updated: 2022/11/02 15:33:46 by gda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	temp;

	temp = (unsigned char)c;
	while (temp != *s)
	{
		if (*s == 0)
			return (0);
		++s;
	}
	return ((char *)s);
}
