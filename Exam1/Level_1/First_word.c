/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   First_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 08:11:58 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/07 09:12:22 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	while (*str == ' ' || *str == '\t')
	{
		str++;
	}
	while ((*str != ' ' && *str != '\t' && *str != 0))
	{
		write(1, &(*str++), 1);
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2 || argc == '\0')
	{
		write(1, "\n", 1);
		return (1);
	}
	first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
