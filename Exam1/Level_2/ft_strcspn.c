/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 09:48:55 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/10 10:38:47 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	size_t	ft_result;
	size_t	std_result;

	if (argc != 3)
	{
		printf("\n");
		return (1);
	}
	ft_result = ft_strcspn(argv[1], argv[2]);
	std_result = strcspn(argv[1], argv[2]);
	printf("%zu\n", ft_result);
	printf("%zu\n", std_result);
	return (0);
}
