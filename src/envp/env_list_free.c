/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   env_list_free.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/14 14:41:47 by rvan-duy      #+#    #+#                 */
/*   Updated: 2022/03/25 11:04:31 by mvan-wij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"
#include <stdlib.h>

void	env_list_free(t_env_var *envp)
{
	while (envp != NULL)
	{
		free(envp->name);
		envp->name = NULL;
		free(envp->value);
		envp->value = NULL;
		free(envp);
		envp = envp->next;
	}
}
