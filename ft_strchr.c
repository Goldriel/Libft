/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:51:31 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/13 18:11:55 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*sh;
	char	ch;

	sh = (char *)s;
	ch = (char)c;
	while (*sh && *sh != ch)
		(sh)++;
	if (*sh == ch)
		return (sh);
	else
		return (NULL);
}
