/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:58:02 by kromain           #+#    #+#             */
/*   Updated: 2017/01/20 18:08:44 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strclen(const char *s, char c)
{
	size_t count;

	count = 0;
	while (s[count] && s[count] != c)
		count++;
	return (count);
}
