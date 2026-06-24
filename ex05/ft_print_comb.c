/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 02:05:38 by alnoukan          #+#    #+#             */
/*   Updated: 2026/06/24 02:12:39 by alnoukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_extend(int *first, int i, int j, int k)
{
	if (!first)
		ft_putchar(' ');
	first = 0;
	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	int	first;

	i = 0;
	first = 1;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_comb_extend(&first, i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

// int main(void)
// {
//   ft_print_comb();
//   return (0);
// }
