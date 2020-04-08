/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <agonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 22:43:48 by agonzale          #+#    #+#             */
/*   Updated: 2020/04/08 10:59:16 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(t_list *l, int number)
{
	if (number < 0)
		number = -number;
	if (number > 9)
	{
		ft_putnbr(l, number / 10);
		ft_putchar(number % 10 + 48, l);
	}
	else
		ft_putchar(number + 48, l);
}

void	ft_case_d(t_list *l)
{
	int number;

	number = va_arg(l->args, int);
	ft_putnbr(l, number);
}