/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:46:08 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/17 13:42:46 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

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

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	n;
	int				i;

	i = 0;
	n = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		i++;
		if (ft_strncmp(str + i, to_find, n) == 0)
			return (str + i);
	}
	return (0);
}	

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	needle[]="toto";
char	hail1[]="borislandiscomingforyoutoto!";
char	hail2[]="borisforever";
char	hail3[]="totisforever";
char	hail4[]="";
char	emptyneedle[]="";

printf("%s -- %s\n%s -- %s\n%s -- %s\n%s -- %s\n", 
ft_strstr(hail1, needle), strstr(hail1,needle), 
ft_strstr(hail2, needle), strstr(hail2, needle), 
ft_strstr(hail3, needle), strstr(hail4, needle), 
ft_strstr(hail1, emptyneedle), strstr(hail1, emptyneedle));
return (0);
}
*/
