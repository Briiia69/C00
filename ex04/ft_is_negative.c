/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 02:05:33 by alnoukan          #+#    #+#             */
/*   Updated: 2026/06/27 23:16:23 by alnoukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n < 0)
		c = 'N';
	else
		c = 'P';
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_is_negative(-1);
// 	ft_is_negative(0);
// 	ft_is_negative(1);
// 	return (0);
// }
