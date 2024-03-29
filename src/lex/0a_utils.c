/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   0a_utils.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mvan-wij <mvan-wij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 14:34:34 by mvan-wij      #+#    #+#                 */
/*   Updated: 2022/02/25 14:35:09 by mvan-wij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "lex.h"
#include <unistd.h>
#include <stdlib.h>

bool	is_type(t_token_type value, t_token_type type)
{
	return ((value & type) == type);
}

void	free_token(void *token)
{
	t_token	*_token;

	_token = token;
	free(_token->value);
	free(_token);
}

t_token_type	get_token_type(char initial)
{
	static const t_token_type	type[] = {\
		[' '] = WHITESPACE, \
		['\t'] = WHITESPACE, \
		['<'] = REDIRECT, \
		['>'] = REDIRECT, \
		['|'] = PIPE, \
		['\''] = SINGLE_QUOTED, \
		['\"'] = DOUBLE_QUOTED \
	};

	if (ft_strchr(" \t<>|\'\"", initial) != NULL)
		return (type[(int)initial]);
	return (UNQUOTED);
}

t_token	*create_token(char *value, t_token_type type)
{
	t_token	*token;

	token = ft_protect(malloc(sizeof(t_token)));
	token->value = value;
	token->type = type;
	return (token);
}
