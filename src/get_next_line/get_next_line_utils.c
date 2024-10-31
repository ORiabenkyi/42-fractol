/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oriabenk <oriabenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:03:28 by ORiabenkyi        #+#    #+#             */
/*   Updated: 2024/10/20 16:15:22 by oriabenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substring;
	size_t	counter;
	size_t	length;

	if (!str)
		return (0);
	if (ft_strlen(str) < (size_t)start)
		return (ft_strdup(""));
	length = ft_strlen(str) - start;
	if (length < len)
		substring = (char *)malloc((length + 1) * sizeof(char));
	else
		substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	counter = 0;
	while (counter < len && str[start + counter])
	{
		substring[counter] = (char)str[counter + start];
		counter++;
	}
	substring[counter] = '\0';
	return (substring);
}

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strchr(const char *str, int symbol)
{
	size_t	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == (char)symbol)
			return ((char *) &str[counter]);
		counter++;
	}
	if ((char)symbol == '\0')
	{
		return ((char *) &str[counter]);
	}
	return (NULL);
}

char	*ft_strdup(const char *income_str)
{
	int		length;
	int		counter;
	char	*outcome_str;

	length = ft_strlen(income_str);
	counter = 0;
	outcome_str = (char *)malloc((length + 1) * sizeof(char));
	if (!outcome_str)
		return (NULL);
	while (counter < length)
	{
		outcome_str[counter] = income_str[counter];
		counter++;
	}
	outcome_str[counter] = '\0';
	return (outcome_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		counter_s1;
	int		counter_s2;
	char	*str;

	counter_s1 = 0;
	counter_s2 = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[counter_s1] != '\0')
	{
		str[counter_s1] = s1[counter_s1];
		counter_s1++;
	}
	while (s2[counter_s2] != '\0')
	{
		str[counter_s1 + counter_s2] = s2[counter_s2];
		counter_s2++;
	}
	str[counter_s1 + counter_s2] = '\0';
	return (str);
}
