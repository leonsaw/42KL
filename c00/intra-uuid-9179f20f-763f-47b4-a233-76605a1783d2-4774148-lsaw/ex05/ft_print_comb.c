/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 00:15:57 by lsaw              #+#    #+#             */
/*   Updated: 2023/03/26 15:19:41 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char d, char e, char f)
{
	write (1, &d, 1);
	write (1, &e, 1);
	write (1, &f, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{
					write (1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
