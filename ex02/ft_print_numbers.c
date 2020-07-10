/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakonyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:56:50 by cakonyan          #+#    #+#             */
/*   Updated: 2020/07/10 11:03:00 by cakonyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_putchar(char c)
{
    write (1, &c, 1);
	return (0);
		}
void ft_print_numbers(void)
{
    char one = '1';
   while ( one <= '9')
   {
      ft_putchar(one);
	  one++;
   }
}
int main(void) {
    ft_print_numbers();
	ft_putchar('\n');
		return (0);
     }
