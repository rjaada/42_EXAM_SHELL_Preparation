/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 09:16:58 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/08 10:03:17 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_tltach(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 'a' + 13) % 26 + 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = (str[i] - 'A' + 13) % 26 + 'A';
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
	rot_tltach(argv[1]);
	write(1, "\n", 1);
	return (0);
}
