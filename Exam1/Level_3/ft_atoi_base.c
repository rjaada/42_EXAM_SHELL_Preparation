/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:26:47 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/20 19:34:22 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1); // Charactère ghalat
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	value;

	result = 0;
	sign = 1;
	// Skipper les espaces ou tabulations
	while (*str == ' ' || *str == '\t')
		str++;
	// Check sign
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	// Kanbdaw n9ra lnumber
	while ((value = get_value(*str)) >= 0 && value < str_base)
	{
		result = result * str_base + value;
		str++;
	}
	return (result * sign);
}

int	main(void)
{
	// Test 1: Base 10
	printf("Base 10: %d\n", ft_atoi_base("123", 10)); // Expected: 123
	// Test 2: Base 16 (Hexadecimal)
	printf("Base 16: %d\n", ft_atoi_base("1a", 16)); // Expected: 26
	return (0);
}
