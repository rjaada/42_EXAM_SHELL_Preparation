/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:42:39 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/09 12:53:34 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	int	i;
	int	upper;
	int	lower;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			upper = str[i] - 32;
			write(1, &upper, 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			lower = str[i] + 32;
			write(1, &lower, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
