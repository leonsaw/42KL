/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:14:00 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/10 20:12:22 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r'))
		i++;
	while ((str[i] != '\0') && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{		
			result = result * 10 + (str[i] - 48);
			i++;
	}
	return (sign * result);
}
