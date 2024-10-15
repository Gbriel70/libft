/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:31:26 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/15 13:31:29 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size);

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;
	size_t	t_size;

	t_size = size * num;
	p = malloc(t_size);
	ft_memset(p, 0, t_size);
	return (p);
}
