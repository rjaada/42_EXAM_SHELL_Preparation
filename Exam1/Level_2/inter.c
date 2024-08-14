/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:54:30 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/14 15:48:07 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int	i;
	int	j;
	int	seen[256] = {0};

	i = 0;
	while (s1[i] != '\0')
	{
		if (seen[(unsigned char)s1[i]] == 0)
		{
			j = 0;
			while (s2[j] != '\0')
			{
				if (s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					seen[(unsigned char)s1[i]] = 1;
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
