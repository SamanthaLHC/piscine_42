/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:59:54 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/24 22:15:14 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	if (size == 0)
		return (0);
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			len++;
			i++;
		}
		j++;
	}	
	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (len + i * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*new_str;

	new_str = malloc(sizeof (char) * (ft_strlen(size, strs, sep) + 1));
	if (!new_str)
		return (0);
	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			new_str[k++] = strs[j][i++];
		i = 0;
		while (sep[i] && (j < size - 1))
			new_str[k++] = sep[i++];
		j++;
	}
	new_str[k] = '\0';
	return (new_str);
}

/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc >= 3)
	printf("%s\n", ft_strjoin(argc - 2, &argv[1], argv[argc-1]));
char *s = ft_strjoin(argc - 2, &argv[1], argv[argc-1]);
printf("%s", s);
free(s);
}
*/
