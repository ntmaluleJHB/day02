/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:41:17 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/09 12:42:14 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb(void)
{
	char u;
	u = '2';
	char t;
	t = '1';
	char h;
	h = '0';
	while (t < '9')
	{
		while (u <= '9')
		{
			write(1, &h, 1);
			write(1, &t, 1);
			write(1, &u, 1);
			write(1, ", ", 2);
			u++;
		}
		u = t + 1;
		t++;
		h++;
	}
}
