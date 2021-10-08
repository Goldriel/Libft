/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarrakis <jarrakis@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:21:49 by jarrakis          #+#    #+#             */
/*   Updated: 2021/10/08 20:55:37 by jarrakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || \
	(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
void main(void)
{
	int i = -1;
	while (i < 530)
	{
		printf("is a %d ", i);
		printf("func C %d ", isalnum(i));
		printf(" %d\n ", ft_isalnum(i));
		i++;
	}
}
*/