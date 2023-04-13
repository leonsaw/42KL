/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaw <lsaw@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 00:48:28 by lsaw              #+#    #+#             */
/*   Updated: 2023/04/09 17:58:23 by lsaw             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size > 0)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (j);
}
