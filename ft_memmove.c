/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:14:01 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/11 19:54:16 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*new_src;
	const char	*last_src;
	char		*new_dest;
	char		*last_dest;

	new_dest = dest;
	new_src = src;
	if (src == NULL && dest == NULL)
		return (dest);
	if (new_src < new_dest)
	{
		last_src = new_src + (n - 1);
		last_dest = new_dest + (n - 1);
		while (n--)
			*last_dest-- = *last_src--;
	}
	else
	{
		while (n--)
			*new_dest++ = *new_src++;
	}
	return (dest);
}
