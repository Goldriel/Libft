/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:14:16 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/20 23:19:16 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*sh;
	char	ch;
	size_t	size;

	sh = (char *)s;
	ch = (char)c;
	size = ft_strlen(sh);
	sh = sh + size;
	while (sh >= s && *sh != ch)
		sh--;
	if (sh < s)
		return (NULL);
	if (*sh == ch)
		return (sh);
	else
		return (NULL);
}
