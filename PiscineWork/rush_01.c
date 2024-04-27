/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:02:41 by myakoven          #+#    #+#             */
/*   Updated: 2023/07/29 19:21:40 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
/*
void ft_rush(int **conditions)
{
	
}
*/
void ft_print (int (*array)[4], int n)
{
	int i = 0;
	int j = 0;
	char numChar;

	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			numChar = array[i][j] + 48;
			write(1, &numChar, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main(void)
{
	int conditions[4][4] = { {4, 3, 2, 1}, {1, 2, 2, 2}, {4, 3, 2, 1}, {1, 2, 2, 2} };
	ft_print(conditions, 4);
}
        /*      int     numSpaces = 4;
        //ft_rush(conditions);

        int     **board[numSpaces][numSpaces];

        int     r; // index of arrays in array aka row
        int     c; // index of numbers in aray

        r = 0;
        c = 0;
	}
	*/



		

