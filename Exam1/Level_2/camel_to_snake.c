/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:49:24 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/09 14:10:39 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int	i;
	int	lower;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			lower = str[i] + 32;
			str[i - 1] = '_';
			write(1, &str[i - 1], 1);
			write(1, &lower, 1);
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
	camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}
