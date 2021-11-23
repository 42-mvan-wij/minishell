/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilities.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:48:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/11/23 14:07:09 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITIES_H
# define UTILITIES_H

# include "structs.h"

t_status	get_env_var(char *var, char *envp[], char **dst);
t_bool		ms_issep(char c);
t_bool		ms_isquote(char c);
t_bool		contains_flag(const char *string, const char *flag);

#endif
