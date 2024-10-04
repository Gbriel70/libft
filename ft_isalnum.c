/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbriel <gbriel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:19:21 by gbriel            #+#    #+#             */
/*   Updated: 2024/10/03 23:25:26 by gbriel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(char *str)
{
    int i;
    
    i = 0;
    if (str[i] == '\0')
        return 0;

    while (str[i])
    {
        if(!ft_isdigit(str[i]))
            return 0;
        i++;
    }
    return 1; 
}

int main()
{
    char *str = "a";
    printf("%d", ft_isalnum(str));
    
    return 0;
}