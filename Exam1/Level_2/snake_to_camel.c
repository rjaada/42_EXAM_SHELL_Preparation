/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:39:04 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/18 17:54:37 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *str)
{
	int	i;
	int	capitalize_next;

	i = 0;
	capitalize_next = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '_')
		{
			capitalize_next = 1;
		}
		else
		{
			if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			write(1, &str[i], 1);
			capitalize_next = 0;
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
	snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}
