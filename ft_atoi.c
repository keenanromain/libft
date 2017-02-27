/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:21:01 by kromain           #+#    #+#             */
/*   Updated: 2017/02/26 16:38:36 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int sign;
	int i;
	int result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && str[i] <= '9' && str[i] >= '0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
