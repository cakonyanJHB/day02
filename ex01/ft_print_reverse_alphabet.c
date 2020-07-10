/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakonyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:44:38 by cakonyan          #+#    #+#             */
/*   Updated: 2020/07/10 10:51:34 by cakonyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c)
{
      write (1, &c, 1);
	  return (0);
}
   void ft_print_reverse_alphabet(void)
{
    char z = 'z';
	while( z >= 'a')
	{
	  ft_putchar(z);
	  z--;
	}

}

int main(void) {
   ft_print_reverse_alphabet();
   ft_putchar('\n');
   return (0);
}
