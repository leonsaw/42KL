/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:54:44 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/10 16:11:53 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_array(long n)
{	
	int		i;
	int		j;
	char	arr[10];

	i = 0;
	while (n > 0)
	{
		arr[i] = n % 10 + 48;
		n = n / 10;
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
		n *= -1;
	}
	if (n == 0)
	{
		ft_putchar('0');
	}
	ft_array (n);
}
