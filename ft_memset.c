/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:24:38 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/12 17:37:25 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int ch помещаемый символ
void *buf строка в которую помещаем символ ch
size_t count колличество символов ch помещаемых в строку *buf
возвращаем строчку *buf
*/

void	*ft_memset(void *buf, int ch, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		((char *)buf)[i] = (unsigned char)ch;
		i ++;
	}
	return (buf);
}
