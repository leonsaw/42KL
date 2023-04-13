/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 04:22:24 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/11 18:37:34 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
}
