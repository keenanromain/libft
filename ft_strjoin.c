/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 14:47:41 by kromain           #+#    #+#             */
/*   Updated: 2017/01/13 16:37:20 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *big;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	big = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (big == NULL)
		return (NULL);
	ft_strcpy(big, (char *)s1);
	ft_strcat(big, (char *)s2);
	return (big);
}
