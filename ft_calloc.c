/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darbib <darbib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:44:38 by darbib            #+#    #+#             */
/*   Updated: 2019/11/05 10:16:02 by darbib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *mem;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (!(mem = malloc(count * size)))
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
