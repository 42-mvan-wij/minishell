/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilities.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/06 11:48:54 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/10/15 12:48:22 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITIES_H
# define UTILITIES_H

# include "libft.h"
# include "structs.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/errno.h>

void		check_acces(const char *cmd, int oflag);
t_bool		contains_flag(const char *string, const char *flag);
t_status	get_env_var(char *var, char *envp[], char **dst);

#endif
