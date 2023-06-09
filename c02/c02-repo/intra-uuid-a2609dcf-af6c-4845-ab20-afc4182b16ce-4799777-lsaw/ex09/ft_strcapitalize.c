/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 20:04:53 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/07 00:37:57 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}	
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	i++;
	}
	return (str);
}
