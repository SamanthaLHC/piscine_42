/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 09:27:01 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/05 10:30:59 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_is_negative(int n)
{
	char	p;
	char	m;

	p = 'P';
	m = 'N';
	if (n >= 0)
	{	
		write (1, &p, 1);
	}	
	else
	{
		write (1, &m, 1);
	}
}
