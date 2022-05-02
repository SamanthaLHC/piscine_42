/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:06:21 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/18 21:44:49 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{	
		ft_putchar('-');
		num = nb * -1;
	}
	else
		num = nb;
	if (num > 9)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + '0');
}
