/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnoukan <alnoukan@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 02:05:53 by alnoukan          #+#    #+#             */
/*   Updated: 2026/06/27 23:16:36 by alnoukan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb_rec(int *tab, int depth, int start, int *first, int n)
{
	int	i;

	if (depth == n)
	{
		if (!*first)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		*first = 0;
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + '0');
			i++;
		}
	}
	else
	{
		i = start;
		while (i < 10)
		{
			tab[depth] = i;
			print_comb_rec(tab, depth + 1, i + 1, first, n);
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	first;
	int	i;
	int	tab[10];

	i = 0;
	while (i < 10)
	{
		tab[i] = 0;
		i++;
	}
	first = 1;
	i = 0;
	if (n > 0)
		print_comb_rec(tab, 0, 0, &first, n);
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }
