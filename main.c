/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oriabenk <oriabenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:59:47 by oriabenk          #+#    #+#             */
/*   Updated: 2024/10/31 10:57:48 by oriabenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "MLX42/MLX42.h"
#include "Libft/libft.h"
#include "src/get_next_line/get_next_line.h"

// -----------------------------------------------------------------------------

int	fractal1(void);
int	fractal2(void);
int	fractal3(void);
int	fractal4(void);

int	main(void)
{
	int		main_menu;

	main_menu = 0;
	while (main_menu != 5)
	{
		ft_putendl_fd("Select a fractal:\n",1);
		ft_putendl_fd("   fractal 1: \t1",1);
		ft_putendl_fd("   fractal 2: \t2",1);
		ft_putendl_fd("   fractal 3: \t3",1);
		ft_putendl_fd("   fractal 4: \t4\n",1);
		ft_putendl_fd("   EXIT: \t5",1);
		main_menu = ft_atoi(get_next_line(0));
		if (main_menu == 1)
			return (fractal1());
		else if (main_menu == 2)
			return (fractal2());
		else if (main_menu == 3)
			return (fractal3());
		else if (main_menu == 4)
			return (fractal4());
		else if (main_menu != 5)
			ft_putendl_fd("Wrong selection : ", 1);
	}
	return (EXIT_SUCCESS);
}
