/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:21:01 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/09 11:05:10 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet()
{
	char start;
 	start = 'z';
	while (start >= 'a')
	{	
		write( 1, &start , 1);
		start--;
	}
}

