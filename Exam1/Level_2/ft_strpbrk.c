/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:40:08 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/11 18:04:30 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}

int	main(int argc, char *argv[])
{
	char	*mine;
	char	*there;

	if (argc != 3)
	{
		printf("\n");
		return (1);
	}
	mine = ft_strpbrk(argv[1], argv[2]);
	there = strpbrk(argv[1], argv[2]);
	printf("%s\n", mine);
	printf("%s\n", there);
	return (0);
}
