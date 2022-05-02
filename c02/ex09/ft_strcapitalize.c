/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 13:50:08 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/13 10:35:43 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_is_alphanum(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{	
		return (0);
	}
}

char	ft_lowcase(char	c)
{
	if (c >= 'a' && c <= 'z')
	{	
		return (1);
	}
	else
	{
		return (0);
	}
}

char	ft_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (!ft_is_alphanum(str[i - 1]))
		{
			if (ft_lowcase(str[i]))
			{
				str[i] -= 32;
			}
			else
			{
				ft_uppercase(str[i]);
			}
		}
		i++;
	}
	return (str);
}
