/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusdepomme <jusdepomme@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:31:53 by jverdier          #+#    #+#             */
/*   Updated: 2024/05/07 16:46:33 by jusdepomme       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (n > 0)
	{
		*p_s++ = '\0';
		n--;
	}
	return ;
}
