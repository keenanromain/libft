/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <kromain@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:42:17 by kromain           #+#    #+#             */
/*   Updated: 2017/02/01 15:39:25 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (!s1 && !s2)
		return (NULL);
	if (s1 == NULL)
		len1 = 0;
	else
		len1 = ft_strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = ft_strlen(s2);
	if ((str = ft_strnew(len1 + ft_strlen(s2) + 1)) == NULL)
		return (NULL);
	(len1 == 0) ? str : ft_strcpy(str, s1);
	(len2 == 0) ? str : ft_strcpy((str + len1), s2);
	return (str);
}
