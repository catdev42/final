/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myakoven <myakoven@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 14:22:10 by myakoven          #+#    #+#             */
/*   Updated: 2023/12/06 23:18:53 by myakoven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s_len == 0)
		len = 0;
	if (start > s_len)
		start = s_len;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	if (!s)
		return (0);
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = 0;
	return (substr);
}

/*
Do we need something that checks the length of the og string?
*/
