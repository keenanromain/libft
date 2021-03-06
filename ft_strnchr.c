/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 14:48:14 by kromain           #+#    #+#             */
/*   Updated: 2017/01/12 20:05:35 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strnchr(char *s, char c)
{
	int i;

	i = -1;
	if (*s)
		while (s[++i])
			if (s[i] == c)
				return (i);
	return (-1);
}
