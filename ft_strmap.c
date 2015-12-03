/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlinhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 17:54:05 by mlinhard          #+#    #+#             */
/*   Updated: 2015/12/03 18:04:50 by mlinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*s_new;

	if (!s || !f)
		return (NULL);
	s_new = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		s_new[i] = (*f)(s[i]);
		i++;
	}
	return (s_new);
}
