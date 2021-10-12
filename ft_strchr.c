/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:51:31 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/12 21:45:25 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;
	char	*sh;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		if (s[i] == c)
		{
			sh = &((char *)s)[i];
			return (sh);
		}
		i++;
	}
	return (0);
}
