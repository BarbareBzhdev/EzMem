/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinchon <gpinchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 00:23:35 by gpinchon          #+#    #+#             */
/*   Updated: 2016/11/24 00:25:06 by gpinchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ezlink_get_data(LINK *link)
{
	return (&link->array.data[0]);
}