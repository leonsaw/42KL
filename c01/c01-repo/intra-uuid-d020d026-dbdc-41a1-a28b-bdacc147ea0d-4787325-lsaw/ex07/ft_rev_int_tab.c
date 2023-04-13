/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 02:39:41 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/03 22:34:18 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *i, int *j)
{
	int	temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	reversetimes;

	reversetimes = size / 2;
	i = 0;
	j = size - 1;
	while (i <= reversetimes)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

// int main (void)
// {
// 	int arr[10] = {4,2,6,3,9};
// 	int i;
// 	int size;
// 	int *tab;

// 	i = 0;
// 	tab = arr;

// 	size = sizeof(arr) / sizeof(arr[0]);
// 	printf("Initial tab is %d, size is %d \n", *tab, size);

// 	ft_rev_int_tab(tab, size);
// 	printf("Final tab is %d, size is %d \n", *tab, size);
		
// 	i = 0;
// 	while (arr[i] != '\0')
//     {
//        printf("Array is %d \n", arr[i]);
// 	   i++;
//     }
// }