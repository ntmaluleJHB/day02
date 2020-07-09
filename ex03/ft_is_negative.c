/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:20:53 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/09 11:29:57 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else if(n >= 0 )
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

