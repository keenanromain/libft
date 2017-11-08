/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_precision.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <kromain@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 11:46:50 by kromain           #+#    #+#             */
/*   Updated: 2017/09/25 20:00:14 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	i_precision(char **s, t_flags *f)
{
	char	*tmp;

	if (!f->set_prec || f->len > (unsigned int)f->prec)
		return ;
	tmp = ft_strnew(f->prec);
	f->zero = false;
	if (*s[0] == '-')
	{
		ft_memset(tmp, '0', f->prec - (ft_strlen(*s) - 1));
		tmp = ft_strjoin("-", tmp);
		*s = ft_strsub(*s, 1, ft_strlen(*s) - 1);
		tmp = ft_strjoin(tmp, *s);
		ft_strdel(s);
		*s = tmp;
		return ;
	}
	ft_memset(tmp, '0', f->prec - f->len);
	ft_strcpy(tmp + f->prec - ft_strlen(*s), *s);
	ft_strdel(s);
	*s = tmp;
}

void	s_precision(char **s, t_flags *f)
{
	if (!f->set_prec || f->len <= (unsigned int)f->prec)
		return ;
	*s = ft_strndup(*s, f->prec);
}

void	ws_precision(wchar_t **ws, t_flags *f)
{
	int		len;
	int		i;

	if (!f->set_prec || ft_wstrlen(*ws) <= (size_t)f->prec)
		return ;
	len = 0;
	i = -1;
	while ((*ws)[++i] && len <= f->prec)
		len += ft_wcharlen((*ws)[i]);
	(*ws)[i - 1] = 0;
}
