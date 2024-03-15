/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccedeno- <ccedeno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:43:44 by ccedeno-          #+#    #+#             */
/*   Updated: 2024/02/18 20:53:19 by ccedeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	check_row_left(int tab [4] [4], int pos, int entry [16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab [pos / 4][i] > max)
			{
				max = tab[pos / 4][i];
				count++;
			}
			i++;
		}
		if (entry [8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

int	check_case(int tab [4] [4], int pos, int entry [16])
{
	if (check_col_up(tab, pos, entry) == 1)
		return (1);
	if (check_col_down(tab, pos, entry) == 1)
		return (1);
	if (check_row_left(tab, pos, entry) == 1)
		return (1);
	if (check_row_right(tab, pos, entry) == 1)
		return (1);
	return (0);
}
