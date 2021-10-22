/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   builtins.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-duy <rvan-duy@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/07 15:46:40 by rvan-duy      #+#    #+#                 */
/*   Updated: 2021/10/22 13:06:14 by rvan-duy      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTINS_H
# define BUILTINS_H

# include "structs.h"

int			builtin_echo(t_cmd_node *nodes);
int			builtin_cd(t_cmd_node *nodes, char **envp);
int			builtin_pwd(void);
t_status	builtin_export(t_cmd_node *nodes, char ***envp);

#endif
