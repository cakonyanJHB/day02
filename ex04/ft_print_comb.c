/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakonyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:17:27 by cakonyan          #+#    #+#             */
/*   Updated: 2020/07/10 16:31:11 by cakonyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_putchar(char c)
{
   write(1, &c, 1);
   return (0);
}
  void ft_print(char a, char b, char c)
{
    ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
   
	ft_putchar(',');
	ft_putchar(' ');
}

 void ft_numbers(void)
{
  char a = '0';
  char b = '0';
  char c = '0';
    while (a <= '9')
    { 
		while (b <= '9')
		{
		     while (c <= '9')
			 {
				 if (a < b & b < c)
		          ft_print(a, b, c);
				 c++;
			 }
	         c = '0';
		     b++;	 
	 	}	
	     b = '0';
	     a++;
	} 
}
  int main(void)
{
   ft_numbers();
   return (0);
}
