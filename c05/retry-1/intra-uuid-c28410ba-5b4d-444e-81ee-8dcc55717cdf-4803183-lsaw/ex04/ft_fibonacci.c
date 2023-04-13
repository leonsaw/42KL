/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:49:11 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/11 20:36:51 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if ((index == 1) || (index == 2))
		return (1);
	else
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}
