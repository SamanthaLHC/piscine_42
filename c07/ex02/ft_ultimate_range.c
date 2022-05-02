/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:58:16 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/24 19:29:37 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}	
	i = 0;
	size = max - min;
	*range = malloc(sizeof (int) * size);
	if (!(*range))
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (size);
}

/*
#include <stdio.h>
int main(int ac, char **av)
{
	int	i;
	int *range;
	int size;

	i = 0;
    size = ft_ultimate_range(&range, atoi(av[1]), atoi(av[2]));
	
	printf("size: %d\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
}
*/
