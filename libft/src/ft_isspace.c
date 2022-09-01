/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoncalv <vgoncalv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 15:44:18 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/08/10 15:44:22 by vgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isspace(int c)
{
	int		offset;
	char	*spaces;

	offset = 0;
	spaces = " \t\r\f\n\v";
	while (spaces[offset] != '\0')
	{
		if (spaces[offset] == c)
			return (1);
		offset++;
	}
	return (0);
}
