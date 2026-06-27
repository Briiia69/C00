/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 02:05:29 by alnoukan          #+#    #+#             */
/*   Updated: 2026/06/27 23:16:24 by alnoukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
