/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 02:05:24 by alnoukan          #+#    #+#             */
/*   Updated: 2026/06/24 02:08:01 by alnoukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 171;
	while (i >= 141)
	{
		write(1, &i, 1);
		i--;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
