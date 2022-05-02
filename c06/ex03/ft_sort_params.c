/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:21:00 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/22 15:52:10 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **argv, int argc)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	j = i + 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[j]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[j];
			argv[j] = temp;
		}
		i++;
		j++;
	}
	if (argc > 1)
	{
		ft_sort_int_tab(argv, argc - 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_int_tab(argv, argc);
	if (argc > 1)
	{	
		while (i < argc)
		{
			ft_putstr(argv[i]);
			write (1, "\n", 1);
			i++;
		}
	}
}
