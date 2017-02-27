/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 13:07:26 by kromain           #+#    #+#             */
/*   Updated: 2017/01/13 01:29:03 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = ft_strlen(s1) + 1;
	s2 = (char *)malloc(sizeof(char) * i);
	if (s2 == NULL)
		return (NULL);
	while (i--)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
