/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:49:18 by sle-huec          #+#    #+#             */
/*   Updated: 2021/08/13 11:02:59 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main()
{
    char    *src1 = "yo";
    char    dst11[11];
    char    dst21[11];
    unsigned int    n11;
    unsigned int    n21;

    n11 = 4;
    n21 = 9;
    printf("n = 4 : %s \n", ft_strncpy(dst11, src1, n11));
    dst11[n11] = '\0';
    printf("n = 9 : %s \n", ft_strncpy(dst21, src1, n21));
}
*/
