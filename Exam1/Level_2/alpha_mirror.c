/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:00:49 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/09 13:45:59 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i;
	int	upper;
	int	lower;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			upper = 'a' - str[i] + 'z';
			write(1, &upper, 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			lower = 'A' - str[i] + 'Z';
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
	alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
