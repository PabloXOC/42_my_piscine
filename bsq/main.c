/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:14:00 by pximenez          #+#    #+#             */
/*   Updated: 2023/10/12 14:20:43 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		write(1, "map error\n", 10);
		return (0);
	}
	while (argc > 1)
	{
		map(argv[i]);
		i++;
		argc--;
	}
}
