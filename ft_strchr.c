/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:51:31 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/12 20:01:46 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*sh;

	i = 0;
	while (s)
	{
		if (s[i] == c)
		{
			sh = &((char *)s)[i];
			return (sh);
		}
		i++;
	}
	return (0);
}
