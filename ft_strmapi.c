/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:53:09 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/10/15 13:53:12 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*resp;
	size_t	size;
	size_t	i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	resp = malloc(size + 1);
	if (!resp)
		return (NULL);
	i = 0;
	while (i < size)
	{
		resp[i] = f(i, s[i]);
		i++;
	}
	resp[i] = '\0';
	return (resp);
}
