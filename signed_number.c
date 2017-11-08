/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signed_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kromain <kromain@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/01 17:28:37 by kromain           #+#    #+#             */
/*   Updated: 2017/09/25 19:55:37 by kromain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	signed_type(t_flags *f, va_list *av)
{
	if (f->mod == h)
		return (intmax_t)(short int)va_arg(*av, int);
	else if (f->mod == hh)
		return (intmax_t)(signed char)va_arg(*av, int);
	else if (f->mod == l)
		return (intmax_t)va_arg(*av, long);
	else if (f->mod == ll)
		return (intmax_t)va_arg(*av, long long);
	else if (f->mod == j)
		return (intmax_t)va_arg(*av, intmax_t);
	else if (f->mod == z)
		return (intmax_t)va_arg(*av, ssize_t);
	else if (f->mod == t)
		return (intmax_t)va_arg(*av, ptrdiff_t);
	return (intmax_t)va_arg(*av, int);
}

static int	helper(t_flags *f, char **s, int len, intmax_t type)
{
	char *tmp;

	tmp = NULL;
	if (f->space && *s[0] != '-' && !f->plus)
	{
		tmp = ft_strjoin(" ", *s);
		ft_strdel(s);
		*s = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	if (f->plus && type >= 0)
	{
		tmp = ft_strjoin("+", *s);
		ft_strdel(s);
		*s = ft_strdup(tmp);
		ft_strdel(&tmp);
	}
	s_width(s, f);
	ft_putstr(*s);
	len = ft_strlen(*s);
	ft_strdel(s);
	return (len);
}

int			print_signed(t_flags *f, intmax_t type)
{
	int			len;
	char		*s;

	len = 0;
	if (!f->prec && !type)
		return (i_width(0, f));
	s = ft_itoa(type);
	f->len = ft_strlen(s);
	if (f->zero &&
	!f->set_prec && !f->minus && f->len < (unsigned int)f->width)
	{
		f->set_prec = true;
		f->prec = (f->plus || type < 0 ||
		f->space) ? f->width - 1 : f->width;
	}
	i_precision(&s, f);
	return (helper(f, &s, len, type));
}
