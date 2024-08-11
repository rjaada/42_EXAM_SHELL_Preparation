/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:05:40 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/08 08:55:18 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	repeat;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			repeat = str[i] % 32;
			while (repeat--)
				write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			repeat = str[i] % 32;
			while (repeat--)
				write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
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
	repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
