/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:43:27 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/23 15:56:48 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	size;

	if (max <= min)
		return (NULL);
	i = 0;
	size = max - min;
	tab = malloc(sizeof (int) * (size + 1));
	if (!tab)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	int *tab;
	int i;

	tab =  ft_range(atoi(av[1]), atoi(av[2]));
	i = 0;
	while (i < atoi(av[2]) - atoi(av[1]))
	{
		printf("%d\n",tab[i]);
		i++;
	}
}
*/
