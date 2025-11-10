/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:45:49 by dbobrov           #+#    #+#             */
/*   Updated: 2025/11/08 14:45:49 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	sub_len;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	sub_len = len_s - start;
	if (len_s <= start)
		return (ft_strdup(""));
	if (sub_len > len)
		sub_len = len;
	substr = (char *)malloc(sub_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < sub_len)
	{
		substr[i] = s[start + i];
		i++;	
	}
	substr[i] = '\0';
	return (substr);
}
