/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 22:28:06 by darbib            #+#    #+#             */
/*   Updated: 2019/11/07 14:32:38 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;
	char			*s_out;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[len]))
		len--;
	if (!(s_out = ft_substr(s1, start, len)))
		return (NULL);
	return (s_out);
}
/*
int main()
{
	printf("%s\n", ft_strtrim("aabababababababab", "ab"));	
	printf("%s\n", ft_strtrim("skultestsk", "klsu"));	
	printf("%s\n", ft_strtrim("         ", " "));	
	printf("%s\n", ft_strtrim("atestb", "ab"));	
	printf("%s\n", ft_strtrim("aabababababababab   fdffabfffa", "ab"));	
}
*/
