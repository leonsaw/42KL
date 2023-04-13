/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combon.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:19:32 by lsaw              #+#    #+#             */
/*   Updated: 2023/03/29 23:52:22 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_array(int j, int nb, int array[], int pos)
{
	j = 0;
	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (j < nb)
	{
		ft_putchar(array[j] + '0');
		j++;
	}
}

void	ft_increment(int n, int arr[])
{
	int	i;
	int	max;

	max = 9;
	i = n - 1;
	while (arr[i] == max)
	{
		i = i - 1;
		max = max - 1;
	}
	arr[i] = arr[i] + 1;
	while (i < n)
	{
		arr[i + 1] = arr[i] + 1;
		i += 1;
	}
}

void	ft_array_loop(int i, int n, int arr[])
{
	while (arr[0] != (10 - n) || arr[n -1] != 9)
	{
		if (arr[n - 1] != 9)
		{
			arr[n - 1] = arr[n - 1] + 1;
		}
		else
		{
			ft_increment(n, arr);
		}
		ft_array(1, n, arr, 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	arr[10];
	int	j;

	i = 0;
	if (n > 0 && n < 10)
	{
		while (i < n)
		{
			arr[i] = i;
			i++;
		}
		ft_array_loop(i, n, arr);
		ft_array(i, n, arr, 0);
	}
	else
	{
		write (1, "Invalid input! Please insert an integer from 1 to 9.", 51);
	}
}
