/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <agonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 22:44:23 by agonzale          #+#    #+#             */
/*   Updated: 2020/03/12 13:56:32 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_case_s(t_list *l)
{
	char *str;

	str = (char *)va_arg(l->args, long int);
	l->len = 0;
	while (str[l->len])
	{
		ft_putchar((char)str[l->len], l);
		l->len++;
	}
}