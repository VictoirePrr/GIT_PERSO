/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:10:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/13 15:16:52 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	if (!(s1 || set))
		return (NULL);
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}

// int	main(void)
// {
// 	char const	s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
// 	char const	set[] = " ";
// 	char		*res;

// 	res = ft_strtrim(s1, set);
// 	printf("||%s||\n", res);
// 	return (0);
// }