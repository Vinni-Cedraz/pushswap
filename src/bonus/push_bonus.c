/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcedraz- <vcedraz-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:55:21 by vcedraz-          #+#    #+#             */
/*   Updated: 2023/04/08 23:35:12 by vcedraz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

void	pa(t_stack *a, t_stack *b)
{
	if (b->last_index < 0)
		return ;
	a->stack[++a->last_index] = b->stack[b->last_index--];
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->last_index < 0)
		return ;
	b->stack[++b->last_index] = a->stack[a->last_index--];
}