/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakonyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:19:04 by cakonyan          #+#    #+#             */
/*   Updated: 2020/07/10 11:53:12 by cakonyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c) 
{
    write (1, &c, 1);
    return (0);
}

void ft_is_negative(int n)
{
 	
	if ( n < 0)
		{
		  ft_putchar('N');
		}
	  else  {
	      ft_putchar('P');
	  }
}

int main(void) 
{
   ft_is_negative(2);
   ft_putchar('\n');
   return (0);
} 
