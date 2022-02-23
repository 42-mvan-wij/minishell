/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_to_arr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-wij <mvan-wij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 13:00:50 by mvan-wij      #+#    #+#                 */
/*   Updated: 2022/02/23 16:58:59 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	**ft_lst_to_arr(t_list *lst, void *end_indicator)
{
	const size_t	len = ft_lstsize(lst);
	void			**arr;
	t_list			*next;
	size_t			i;

	arr = malloc((len + 1) * sizeof(void *));
	if (arr == NULL)
		return (NULL);
	arr[len] = end_indicator;
	i = 0;
	while (lst != NULL)
	{
		arr[i] = lst->content;
		next = lst->next;
		free(lst);
		lst = next;
		i++;
	}
	return (arr);
}
