/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 10:44:01 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/05 22:15:20 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char u, char d, char c)
{
	write(1, &u, 1);
	write(1, &d, 1);
	write(1, &c, 1);
}

void	ft_coma(char c, char d, char u)
{
	if (!(c == 55 && d == 56 && u == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '0';
	u = '0';
	while (c <= '9')
	{
		d = c + 1;
		while (d <= '9')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				ft_coma(c, d, u);
				u++;
			}
			d++;
		}
		c++;
	}
}
