/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 00:21:06 by lsaw              #+#    #+#             */
/*   Updated: 2023/03/29 23:13:36 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putset(char c)
{
	int	sv;

	sv = (c / 10) + 48;
	write (1, &sv, 1);
	sv = (c % 10) + 48;
	write (1, &sv, 1);
}

void	ft_print_comb2(void)
{
	int	set1;
	int	set2;

	set1 = 0;
	while (set1 <= 99)
	{
		set2 = set1 + 1;
		while (set2 <= 99)
		{
			ft_putset(set1);
			write (1, " ", 1);
			ft_putset(set2);
			if (!(set1 == 98 && set2 == 99))
			{
				write(1, ", ", 2);
			}
			set2++;
		}
		set1++;
	}
}
