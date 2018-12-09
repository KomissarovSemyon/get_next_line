/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amerlon- <amerlon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 12:50:36 by amerlon-          #+#    #+#             */
/*   Updated: 2018/12/09 12:50:48 by amerlon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmjoin(char *s1, char *s2)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strjoin("", s2));
	if (!s2)
		return (ft_strjoin(s1, ""));
	return (ft_strjoin(s1, s2));
}
