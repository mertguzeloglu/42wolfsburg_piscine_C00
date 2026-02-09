/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguzelog <mguzelog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:07:28 by mguzelog          #+#    #+#             */
/*   Updated: 2026/02/09 12:07:31 by mguzelog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ifconditionspart(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb <= 9 && nb >= 0)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		c = (nb % 10) + '0';
		write(1, &c, 1);
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	ifconditionspart(nb);
	if (nb < 0 && !(nb == -2147483648))
	{
		nb = -nb;
		write(1, "-", 1);
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			c = (nb % 10) + '0';
			write(1, &c, 1);
		}
		else
		{
			c = nb + '0';
			write(1, &c, 1);
		}
	}
}
