/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:17:14 by darbib            #+#    #+#             */
/*   Updated: 2019/11/07 11:49:43 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(char const *s, char c)
{
	char const	*p_s;
	size_t		n_words;

	n_words = 0;
	p_s = s;
	while (*p_s)
	{
		if (*p_s == c && *(p_s + 1) != c)
			n_words++;
		p_s++;
	}
	n_words++;
	return (n_words);
}

char			**ft_split(char const *s, char c)
{
	char const	*p_s;
	char		**words;
	size_t		i;
	size_t		j;
	size_t		n_words;

	if (!s)
		return (NULL);
	i = 0;
	n_words = count_w(s, c);
	if (!(words = (char **)malloc(sizeof(char *) * (n_words + 1))))
		return (NULL);
	p_s = s;
	while (i < n_words)
	{
		j = 0;
		while ((p_s[j]) && (p_s[j] != c && *(p_s + 1) == c))
			j++;
		if (!(words[i] = ft_substr(p_s, 0, j)))
			return (NULL);
		p_s += j + 1;
		i++;
	}
	words[i] = NULL;
	return (words);
}
