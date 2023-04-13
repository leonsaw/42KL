/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:28:45 by lsaw              #+#    #+#             */
/*   Updated: 2023/03/29 23:43:14 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_array(long a)
{
	int		i;
	int		j;
	char	arr[10];

	i = 0;
	while (a > 0)
	{	
			arr[i] = a % 10 + 48;
			a = a / 10;
			i++;
	}
		j = i - 1;
	while (j >= 0)
	{
		ft_putchar(arr[j]);
		j--;
	}
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		ft_putchar('0');
	}
	ft_array (n);
}
