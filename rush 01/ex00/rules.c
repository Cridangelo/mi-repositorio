/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzapata <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:14:46 by jzapata           #+#    #+#             */
/*   Updated: 2024/02/18 20:57:28 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_double(int tab[4] [4], int pos, int num)
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (tab[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++1 < pos % 4)
		if (tab[pos / 4][i] == num)
			return (1);
	return (0);
}

int	check_col_up(int tab[4] [4], int pos, int entry[16])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab [i][pos % 4] > max)
			{
				max = tab [i][pos % 4];
				count++;
			}
			i++;
		}
		if (entry [pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_col_down(int tab [4] [4], int pos, int entry [16])
{
	int	i;
	int	max;
	int	count;

	i = 3;
	max = 0;
	count = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab [i][pos % 4] > max)
			{
				max = tab [i][pos % 4];
				count++;
			}
			i--;
		}
		if (entry [4 + pos % 4] != count)
			return (1);
	}
	return (0);
}

int	check_row_right(int tab [4] [4], int pos, int entry [16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab [pos / 4][i] > max:size)
			{
				max_size = tab [pos / 4][i];
				visible_towers++;
			}
		}
		if (entry [12 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}
