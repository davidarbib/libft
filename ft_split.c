/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:17:14 by darbib            #+#    #+#             */
/*   Updated: 2019/11/13 14:28:28 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void		free_words(char **w)
{
	while (*w)
		free(*w++);
	free(*w);
	free(w);
}

static size_t	count_w(char const *s, char c)
{
	size_t	i;
	size_t	nb;
	
	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			nb++;
		i++;
	}
	return (nb);
}

static char		**divide(char const *s, char c, size_t nb)
{
	char	**words;
	size_t	i;
	size_t	j;

	if (!(words = ft_calloc(nb + 1, sizeof(char *))))
		return (NULL);
	words[nb] = NULL;
	i = 0;
	while (*s)
	{
		j = 0;
		while (s[j] && s[j] != c)
			j++;
		if (!(words[i++] = ft_substr(s, 0, j)))
		{	
			free_words(words);
			return (NULL);
		}
		while (s[j] && s[j] == c)
			j++;
		s += j;
	}
	return (words);
}

char			**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;

	if (!s)
		return (NULL);
	if (c == '\0')
	{
		if (!(words = (char **)malloc(sizeof(char *) * 2)))
			return (NULL);
		if (!(words[0] = ft_strdup(s)))
			return (NULL);;
		words[1] = NULL;
		return (words);
	}
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	s += i;
	if (!(words = divide(s, c, count_w(s, c))))
		return (NULL);
	return (words);
}

int main()
{
	char **w;
	size_t i;

	setbuf(stdout, NULL);
	i = 0;
	w = ft_split("c'est putain de drole !!!", ' ');
	while (w[i])
		ft_putendl_fd(w[i++], 1);
	i = 0;
	while (w[i])
		free(w[i++]);
	free(w[i]);
	free(w);
	ft_putendl_fd("-----------------------------", 1);
	i = 0;
	w = ft_split("c'est putain de drole !!!    ", ' ');
	while (w[i])
		ft_putendl_fd(w[i++], 1);
	i = 0;
	while (w[i])
		free(w[i++]);
	free(w[i]);
	free(w);
	ft_putendl_fd("-----------------------------", 1);
	i = 0;
	w = ft_split("   ", ' ');
	while (w[i])
		ft_putendl_fd(w[i++], 1);
	i = 0;
	while (w[i])
		free(w[i++]);
	free(w[i]);
	free(w);
	ft_putendl_fd("-----------------------------", 1);
	i = 0;
	w = ft_split("c'est putain de drole !!!", '\0');
	while (w[i])
		ft_putendl_fd(w[i++], 1);
	i = 0;
	while (w[i])
		free(w[i++]);
	free(w[i]);
	free(w);
	ft_putendl_fd("-----------------------------", 1);
	i = 0;
	w = ft_split("un        bon test de qualite   ", ' ');
	while (w[i])
		ft_putendl_fd(w[i++], 1);
	i = 0;
	while (w[i])
		free(w[i++]);
	free(w[i]);
	free(w);
	ft_putendl_fd("-----------------------------", 1);
	i = 0;
	w = ft_split("        un        bon test de qualite   ", ' ');
	while (w[i])
		ft_putendl_fd(w[i++], 1);
	i = 0;
	while (w[i])
		free(w[i++]);
	free(w[i]);
	free(w);
}
