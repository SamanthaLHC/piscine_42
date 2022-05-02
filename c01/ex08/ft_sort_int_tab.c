/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:23:37 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/10 09:29:39 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	while (i < size - 1)
	{
		if (tab[i] > tab[j])
		{	
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
		}
		i++;
		j++;
	}
	if (size > 1)
	{
		ft_sort_int_tab(tab, size - 1);
	}
}
