/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspecifier.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <agonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:14:55 by agonzale          #+#    #+#             */
/*   Updated: 2020/10/24 12:59:04 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_isspecifier(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
			c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (TRUE);
	else
		return (FALSE);
}

void		ft_specifier(t_list *l, const char *line)
{
	if (line[l->pos] == 'c')
		ft_printer_char(l);
	else if (line[l->pos] == 's')
		ft_printer_string(l);
	else if (line[l->pos] == 'p')
		ft_printer_hexap(l);
	else if ((line[l->pos] == 'd') || (line[l->pos] == 'i'))
		ft_printer_int(l);
	else if (line[l->pos] == 'x' || line[l->pos] == 'X')
		ft_printer_hexa(l, line);
	else if (line[l->pos] == 'u')
		ft_printer_unsigned(l);
	else if (line[l->pos] == '%')
		ft_printer_percent(l);
}
