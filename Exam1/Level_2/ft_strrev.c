/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:07:29 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/12 13:59:02 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	temp[100];

	i = -1;
	length = 0;
	while (str[length])
		length++;
	while (i++ < length / 2)
	{
		*temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = *temp;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("\n");
		return (1);
	}
	printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
