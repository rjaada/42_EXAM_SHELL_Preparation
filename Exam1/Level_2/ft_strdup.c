/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 10:42:36 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/10 11:08:48 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	dup = malloc((j * sizeof(*src)) + 1);
	if (dup == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(int argc, char *argv[])
{
	char	*dup;

	char * or ;
	if (argc != 2)
	{
		printf("\n");
		return (1);
	}
	dup = ft_strdup(argv[1]);
	or = strdup(argv[1]);
	printf("%s\n", dup);
	printf("%s\n", or);
	return (0);
}
