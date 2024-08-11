/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaada <rjaada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 14:17:37 by rjaada            #+#    #+#             */
/*   Updated: 2024/08/09 15:00:49 by rjaada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("\n");
		return (1);
	}
	if (argv[2][0] == '+')
		printf("%d\n", (atoi(argv[1]) + atoi(argv[3])));
	if (argv[2][0] == '-')
		printf("%d\n", (atoi(argv[1]) - atoi(argv[3])));
	if (argv[2][0] == '*')
		printf("%d\n", (atoi(argv[1]) * atoi(argv[3])));
	if (argv[2][0] == '/')
		printf("%d\n", (atoi(argv[1]) / atoi(argv[3])));
	if (argv[2][0] == '%')
		printf("%d\n", (atoi(argv[1]) % atoi(argv[3])));
	return (0);
}
