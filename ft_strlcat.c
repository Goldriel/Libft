/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:55:12 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/16 20:22:55 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	const char *odst = dest;
	const char *osrc = src;
	size_t n = size;
	size_t dlen;

	while (n-- != 0 && *dest != '\0')
		dest++;
	dlen = dest - odst;
	n = size - dlen;

	if (n-- == 0)
		return(dlen + ft_strlen(src));
	while (*src != '\0') {
		if (n != 0) {
			*dest++ = *src;
			n--;
		}
		src++;
	}
	*dest = '\0';

	return(dlen + (src - osrc));	
}
