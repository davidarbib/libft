/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:19:28 by darbib            #+#    #+#             */
/*   Updated: 2019/11/07 16:27:47 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	char	*p_s2;

	if (!s || !f)
		return (NULL);
	if (!(s2 = ft_strdup(s)))
		return (NULL);
	p_s2 = s2;
	while (*s2)
		*s2++ = (*f)(3, *s++);
	return (p_s2);
}
