/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakonyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:50:13 by cakonyan          #+#    #+#             */
/*   Updated: 2020/07/10 10:29:04 by cakonyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_putchar(char c)
{
   write(1, &c, 1);
   return (0);

}
     void  ft_print_alphabet(void)    
{
	char  letter = 'a';
	     while (letter < 'z')
		 {
              ft_putchar(letter);
		      letter++;
		 }
}

int main(void) 
{
   ft_print_alphabet();
   ft_putchar('\n');
   return (0);
}

