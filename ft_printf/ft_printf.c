/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda-cruz <gda-cruz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:30:58 by gda-cruz          #+#    #+#             */
/*   Updated: 2022/11/10 17:48:44 by gda-cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		counter;
	int		i;

	i = 0;
	counter = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (ft_strchr("cspdiuxX", s[++i]))
				counter += ((int (*)())ft_redirect(s[i]))(va_arg(ap, void *));
			else if (ft_strchr("+ #", s[i]) && ++i)
				counter += ((int (*)())ft_redirect_flags(s[i - 1], s[i]))
					(va_arg(ap, void *));
			else
				counter += write(1, &s[i], 1);
		}
		else
			counter += write(1, &s[i], 1);
		i++;
	}
	va_end(ap);
	return (counter);
}

// int main()
// {
// 	int		mine = 0;
// 	int		original = 0;
// 	printf("\t\t///PRINTING CHARS AND STRINGS\\\\\\\n");
// 	char	*str = "Print this.";
// 	mine = ft_printf("%s\n", str);
// 	original = printf("%s\n", str);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf
// 	("Print the first character of the previous phrase: %c\n", str[0]);
// 	original = printf
// 	("Print the first character of the previous phrase: %c\n", str[0]);
// 	printf("%i and %i\n", mine, original);

// 	printf("\t\t///PRINTING NUMBERS\\\\\\\n");
// 	int	x = -2147483648;
// 	mine = ft_printf("Using %%i: %i\n", x);
// 	original = printf("Using %%i: %i\n", x);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf("Using %%d: %d\n", x);
// 	original = printf("Using %%d: %d\n", x);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf("Using %%u: %u\n", x);
// 	original = printf("Using %%u: %u\n", x);
// 	printf("%i and %i\n", mine, original);

// 	printf("\t\t///MEMORY AND HEX\\\\\\\n");
// 	x = 2765;
// 	mine = ft_printf("Using %%x: %x\n", x);
// 	original = printf("Using %%x: %x\n", x);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf("Using %%X: %X\n", x);
// 	original = printf("Using %%X: %X\n", x);
// 	printf("%i and %i\n", mine, original);
// 	mine = ft_printf("Using %%p: %p\n", &x);
// 	original = printf("Using %%p: %p\n", &x);
// 	printf("%i and %i\n", mine, original);

// 		printf("\t\t///FLAGS\\\\\\\n");
// 	x = -2147483648;
// 	mine = ft_printf("+ flag: %+d\n", x);
// 	original = printf("+ flag: %+d\n", x);
// 	printf("%i and %i\n", mine, original);
	
// 	mine = ft_printf("+ flag: % s\n", NULL);
// 	original = printf("+ flag: % s\n", NULL);
// 	printf("%i and %i\n", mine, original);
	
// 	mine = ft_printf("+ flag: % c\n", 'G');
// 	original = printf("+ flag: % c\n", 'G');
// 	printf("%i and %i\n", mine, original);
	
// 	mine = ft_printf("+ flag: % u\n", 42);
// 	original = printf("+ flag: % u\n", 42);
// 	printf("%i and %i\n", mine, original);
	
// 	mine = ft_printf("+ flag: %+d\n", 0);
// 	original = printf("+ flag: %+d\n", 0);
// 	printf("%i and %i\n", mine, original);
	
// 	mine = ft_printf("space flag: % d\n", 0);
// 	original = printf("space flag: % d\n", 0);
// 	printf("%i and %i\n", mine, original);
	
// 	mine = ft_printf("# flag: %#x\n", x);
// 	original = printf("# flag: %#x\n", x);
// 	printf("%i and %i\n", mine, original);
	
// 	mine = ft_printf("# flag: %#X\n", x);
// 	original = printf("# flag: %#X\n", x);
// 	printf("%i and %i\n", mine, original);

// 	return (0);
// }