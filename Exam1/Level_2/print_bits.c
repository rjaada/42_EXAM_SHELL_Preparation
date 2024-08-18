/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:04:50 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/18 17:01:47 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	main(int argc, char *argv[])
{
	unsigned char	value;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	value = (unsigned char)atoi(argv[1]);
	print_bits(value);
	write(1, "\n", 1);
	return (0);
}
