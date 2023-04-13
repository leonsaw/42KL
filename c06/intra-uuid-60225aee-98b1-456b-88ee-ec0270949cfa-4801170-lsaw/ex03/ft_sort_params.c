/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 02:45:45 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/13 00:23:09 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((*s1[i] == *s2[i]) && (*s1[i] != '\0') && (*s2[i] != '\0'))
		i++;
	return (*s1[i] - *s2[i]);
}

void ft_sort(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				ft_swap(&av[i], &av[j]);
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int main (int ac, char **av)
{
	int	i;
	int j;

	if (ac < 2)
		return (0);;
	
	ft_sort (ac, av);
	
	for (int m = 0; i < ac; m ++)
	{
		char *str = av[m];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
	}
}
