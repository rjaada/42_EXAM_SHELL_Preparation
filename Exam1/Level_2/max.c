/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:22:40 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/17 19:18:16 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int				max_value;
	unsigned int	i;

	if (len == 0)
		return (0);
	i = 1;
	max_value = tab[0];
	while (i < len)
	{
		if (tab[i] > max_value)
		{
			max_value = tab[i];
		}
		i++;
	}
	return (max_value);
}

int	main(void)
{
	int				numbers[] = {3, 1, 7, 4, 9, 2};
	unsigned int	length;
	int				result;

	length = 6;
	result = max(numbers, length);
	printf("The maximum value is: %d\n", result);
	return (0);
}
