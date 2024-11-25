/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:41:48 by rhvidste          #+#    #+#             */
/*   Updated: 2024/11/25 11:19:45 by rhvidste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	unsigned char	*dest;
	size_t			len;
	size_t			i;

	len = ft_strlen(s);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return ((char *)dest);
}

size_t	ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*dest;
	size_t		i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		start = ft_strlen(s);
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && i < len)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char		*dest;
	size_t		i;
	size_t		j;
	size_t		s1_len;
	size_t		s2_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}
