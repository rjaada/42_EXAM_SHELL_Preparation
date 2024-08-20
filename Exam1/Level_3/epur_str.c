/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:02:52 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/20 18:32:17 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int	i;
	int	first_word;

	i = 0;
	first_word = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (!first_word)
				write(1, " ", 1);
			while (str[i] && str[i] != ' ' && str[i] != '\t')
				write(1, &str[i++], 1);
			first_word = 0;
		}
		else
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
	epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
