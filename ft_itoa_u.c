/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <kromain@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 14:59:22 by kromain           #+#    #+#             */
/*   Updated: 2017/09/25 19:53:02 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_u(unsigned long long n, unsigned int base)
{
	char				*str;
	int					length;
	unsigned long long	value;
	const char			base_str[16] = "0123456789ABCDEF";

	value = n;
	length = 1;
	while (value >= base)
	{
		length++;
		value = value / base;
	}
	str = (char *)malloc(sizeof(char) * (length + 1));
	str[length] = '\0';
	while (0 < length--)
	{
		str[length] = base_str[n % base];
		n = n / base;
	}
	return (str);
}
