/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:03:48 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/18 17:32:50 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				i;

	result = 0;
	i = 8;
	while (i--)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
	}
	return (result);
}

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i) & 1;
		bit += '0';
		write(1, &bit, 1);
	}
}

int	main(int argc, char *argv[])
{
	unsigned char value, reversed_value;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	value = (unsigned char)atoi(argv[1]);
	// Convert input string to unsigned char
	reversed_value = reverse_bits(value); // Reverse the bits
	print_bits(reversed_value);           // Print the reversed bits
	write(1, "\n", 1);                    // Print a newline for clarity
	return (0);
}
