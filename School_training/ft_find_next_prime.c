/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fceragio <fceragio@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:09:50 by fceragio          #+#    #+#             */
/*   Updated: 2024/01/26 19:10:37 by fceragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	div = 2;
	while (div < nb)
	{
		if (nb % div == 0)
			return (0);
		else
			div++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	up;
	int	down;

	if (nb < 0)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	up = nb + 1;
	down = nb - 1;
	while (!ft_is_prime(up) && !ft_is_prime(down))
	{
		up++;
		down--;
	}
	if (ft_is_prime(up))
		return (up);
	else
		return (down);
}

/*#include <stdio.h>

int	main(void)
{
	int	x = 17;
	int	y = 0;
	int	z = 14;

	printf("If %d, the closest prime number is %d\n", x, ft_find_next_prime(x));
	printf("If %d, the closest prime number is %d\n", y, ft_find_next_prime(y));
	printf("If %d, the closest prime number is %d\n", z, ft_find_next_prime(z));
	return (0);
}*/
