/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frudello < frudello@student.42roma.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:02:19 by frudello          #+#    #+#             */
/*   Updated: 2022/04/08 17:11:23 by frudello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "pipex.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*sm1;
	unsigned char	*sm2;
	size_t			i;

	i = 0;
	sm1 = (unsigned char *)s1;
	sm2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (sm1[i] == sm2[i] && i < (n - 1) && sm1[i])
	{
		i++;
	}
	if (sm2[i] < sm1[i])
		return (1);
	else if (sm2[i] == sm1[i])
		return (0);
	else
		return (-1);
}
