/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 11:52:20 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/17 13:36:32 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i] && (i < n))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[]="t";
	char b[]="boris";
	char c[]="";
	char d[]="borisland";

	printf("%d %d\n%d %d\n%d %d\n%d %d\n", strncmp(a, b, 2), ft_strncmp(a, b, 2), 
	strncmp(a, c, 1), ft_strncmp(a, c, 1), strncmp(b, d, 5), ft_strncmp(b, d, 5), 
	strncmp(a, a, 2), ft_strncmp(a, a, 2));
	return (0);
}
*/
