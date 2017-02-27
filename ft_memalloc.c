/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 11:56:58 by kromain           #+#    #+#             */
/*   Updated: 2017/01/22 13:35:09 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memory;

	memory = (void *)malloc(size);
	if (memory == NULL)
		return (NULL);
	else
	{
		ft_memset(memory, 0, size);
		return (memory);
	}
}
