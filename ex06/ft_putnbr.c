/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntmalule <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:08:43 by ntmalule          #+#    #+#             */
/*   Updated: 2020/07/09 17:31:38 by ntmalule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

 void ft_putnbr(int nb)
{
	char num;
	int check;
	int x;
	x = 10;
	num = '1';
	check = 1;
	while ((nb/x) > 0)
	{
		check++;
		x= x*10;
	}
	
	}

}

int main()
{
	ft_putnbr(45);
	return(0);
}


