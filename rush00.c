/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vida-sil <vida-sil@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:22:17 by vida-sil          #+#    #+#             */
/*   Updated: 2021/04/03 20:22:56 by vida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	ft_putchar(char a);

void	rush(int x, int y)
{
        int i;

        i = 0;
        while ((i < y) && (x > 0))
        {
            int j;
            j = 0;
            while(j < x)
            {
                if((i == 0) || (i == (y-1)))
                {
                    if((j == 0) || (j == (x-1)))
                        ft_putchar('o');
                    else 
                        ft_putchar('-');
                }
                else
                {
                    if((j == 0) || j == (x - 1))
                        ft_putchar('|');
                    else
                        ft_putchar(' ');
                }
               j++;
            }
            ft_putchar('\n');

            i++;
        }
}
        /*
        **                          REGRA: 
        **   1 - Um "o" conta como 1 de altura e 1 de largura.
        **
        **                          LÓGICA:
        **
        **   1 - Só mostrar qualquer coisa na tela quando o valor da largura (x),
        **       for MAIOR que 0 (lagura > 0), caso contratio não mostrar nada na tela.
        **   
        **   2 - Quando a altura (y) for MENOR ou IGUAL que 0 (altura <= 0)
        **       não mostra o "|", pois a "o" já conta como 1 de altura.
        **
        **   3 - Existe uma diferença entre a altura total e a quantidade de "|" que 
        **       que devem ser mostrados na tela, uma vez que o carectere "o" também
        **       conta como um caractere de altura, portando a quantidade de caracteres
        **       "|" que devem ser mostrados na tela é igual a (altura - 2).
        **
        **    4 - Apáos mostrar a altura, devemos repetir o processo para mostrar para 
        **        mostrar a base do sólido.
        **         
        **
        **
        */
        /*
        **  Lógica Largura 
        */
