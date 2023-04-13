/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:37:34 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/03 23:46:03 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *i, int *j)
{
	int	temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap (&tab[j], &tab[j + 1]);
			}
		j++;
		}
	i++;
	}
}

// int	main(void)
// {
// 	int	arr[] = {2, 51, 23, 89, 33};
// 	int	size;
// 	int	i;
// 	int	*tab;

// 	size = sizeof(arr) / sizeof(arr[0]);

// 	tab = arr; 

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("The array before sorting is: %d \n", arr[i]);
// 		i++;
// 	}

//     ft_sort_int_tab(tab, size);

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("The array after sorting is: %d \n", arr[i]);
// 		i++;
// 	}
// }