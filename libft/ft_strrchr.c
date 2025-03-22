/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rauizqui <rauizqui@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:54:59 by rauizqui          #+#    #+#             */
/*   Updated: 2025/01/22 19:13:51 by rauizqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = '\0';
	while (*s)
	{
		if (*s == (char) c)
		{
			last = s;
		}
		s++;
	}
	if (*s == (char) c)
		return ((char *)s);
	return ((char *) last);
}
