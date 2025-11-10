/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:00:04 by dbobrov           #+#    #+#             */
/*   Updated: 2025/11/08 13:23:06 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    
    p = (const unsigned char *)s;
    while (n > 0)
    {
        if (*p == (unsigned char)c)
            return (p);
        p++;
        n--;
    }
}
