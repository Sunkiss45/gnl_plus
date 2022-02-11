/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:22:05 by ebarguil          #+#    #+#             */
/*   Updated: 2021/12/11 16:25:11 by ebarguil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		n = 0;

	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	printf(YELLOW"\n (( %d )) \n", fd);
	while (++n < 10 && (line = get_next_line(fd)) != NULL)
	{
		printf(RED"l-[%d] - "GREEN"[%s]"RESET"\n", n, line);
		free(line);
	}
	close(fd);
}
