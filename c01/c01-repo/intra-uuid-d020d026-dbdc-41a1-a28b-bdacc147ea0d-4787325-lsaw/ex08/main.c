/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:37:28 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/03 23:40:45 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	arr[] = {2, 51, 23, 89, 33};
	int	size;
	int	i;
	int	*tab;

	size = sizeof(arr) / sizeof(arr[0]);

	tab = arr; 

	i = 0;
	while (i < size)
	{
		printf("The array before sorting is: %d \n", arr[i]);
		i++;
	}

    ft_sort_int_tab(tab, size);

	i = 0;
	while (i < size)
	{
		printf("The array after sorting is: %d \n", arr[i]);
		i++;
	}
}
