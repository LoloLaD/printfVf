/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 14:04:10 by lfourmau          #+#    #+#             */
/*   Updated: 2020/12/29 09:30:24 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isflag(char c)
{
	if (c == '0' || c == '-') // flags bonu a ajouter ici
		return (1);
	return (0);
}

int	ft_isspec(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u' ||
		c == 'x' || c == 'X' || c== '%' || c == 'n')
		return (1);
	return (0);
}
