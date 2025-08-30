/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilitago <ilitago@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:22:27 by ilitago           #+#    #+#             */
/*   Updated: 2025/08/30 14:33:22 by ilitago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write (1, &c, 1);
}

void rush(int x, int y)
{
	int i,j;
	char hg = 'A';
	char hd = 'A';
	char bg = 'C';
	char bd = 'C';	
	char lx = 'B';
	char ly = 'B';
	
	j = 1;
	while ((j <= y) && (y > 0))
	{
		i = 1;
		while ((i <= x) && (x > 0)){
			if (j == 1)
			{			//First line
				if (i == 1){ 	//First item
					ft_putchar(hg);
				}
				if ((i == x) && (i > 1)){	//Last item
					ft_putchar(hd);
				}
				if (i == x){
					ft_putchar('\n');
				}
				if ((i > 1) && (i < x)){		//Cote haut
					ft_putchar(lx);
					}
				}
			if ((j == y) && (y > 1))
			{			//Last line
				if (i == 1) {    //First item
					ft_putchar(bg);
				}
				if ((i == x) && (i > 1)){    //Last item
					ft_putchar(bd);
				}
				if (i == x){
					ft_putchar('\n');
				}
				if ((i > 1) && (i < x )){           //Cote haut
	                                ft_putchar(lx);
                                }
			}
			if ((j > 1) && (j < y))
			{			//Mid line
                                if (i == 1)
				{    //First item
                                        ft_putchar(ly);
                                }
                                if ((i == x) && (i > 1))
				{    //Last item
                                        ft_putchar(ly);
				}
				if (i == x)
				{
					ft_putchar('\n');
                                }
                                if ((i > 1) && (i < x ))
				{           //Cote haut
                                        ft_putchar(' ');		
				}
			}
			i++;		//Loop on the line
		}
		j++; 		//Loop next line
	}


}


int main()
{
	rush(5,3);
	rush(5,1);
	rush(1,1);
	rush(1,5);
	rush(4,4);
	return(0);

}
