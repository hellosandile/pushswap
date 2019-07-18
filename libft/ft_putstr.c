/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samkhize <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:51:53 by samkhize          #+#    #+#             */
/*   Updated: 2019/06/07 12:39:51 by samkhize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}
