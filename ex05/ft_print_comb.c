/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 02:05:38 by alnoukan          #+#    #+#             */
/*   Updated: 2026/06/27 23:16:20 by alnoukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_extend(int i, int j, int k)
{
	int	n;

	ft_putchar(i + '0');
	ft_putchar(j + '0');
	ft_putchar(k + '0');
	n = (i * 100) + (j * 10) + k;
	if (n < 789)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_print_comb_extend(i, j, k);
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
