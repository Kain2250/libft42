/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdrinkin <bdrinkin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 23:38:35 by bdrinkin          #+#    #+#             */
/*   Updated: 2020/06/08 23:39:06 by bdrinkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlstr(char *s, int len)
{
	int	i;

	i = 0;
	while (i != len)
	{
		ft_putchar(s[i]);
		i++;
	}
}
