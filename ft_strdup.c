/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <mlothair@student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:15:09 by mlothair          #+#    #+#             */
/*   Updated: 2021/10/07 18:13:24 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_c;

	s1_c = malloc(ft_strlen(s1) + 1);
	if (s1_c == 0)
	{
		return (0);
	}
	ft_memcpy(s1_c, s1, ft_strlen(s1));
	s1_c[ft_strlen(s1)] = '\0';
	return (s1_c);
}
