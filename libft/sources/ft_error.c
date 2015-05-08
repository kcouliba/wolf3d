/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/30 21:16:44 by kcouliba          #+#    #+#             */
/*   Updated: 2014/10/07 16:00:53 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*get_error_msg(int errnum)
{
	char	*error[2];
	char	*default_msg;
	int		min;
	int		max;

	min = 0;
	max = 1;
	default_msg = "Default message";
	error[0] = "Emtpy file";
	error[1] = "Undefined error";
	if ((errnum > max) || (errnum < min) || !error[errnum])
		return (default_msg);
	return (error[errnum]);
}

t_error	*new_error(int num, char *msg, char *trigger, size_t fatal)
{
	t_error	*new;

	if (!(new = (t_error*)malloc(sizeof(*new))))
		return (NULL);
	new->num = num;
	new->msg = ((msg) ? ft_strdup(msg) : get_error_msg(new->num));
	new->trigger = ((trigger) ? ft_strdup(trigger) : NULL);
	new->fatal = fatal;
	return (new);
}

size_t	ft_throw_error(t_error *error, void (*f)(void))
{
	char	*msg;
	char	*fatal;
	char	*mainstream;

	fatal = "A fatal error has been thrown for : '";
	mainstream = "An error has been thrown for : '";
	msg = ((error->fatal) ? ft_strdup(fatal) : ft_strdup(mainstream));
	if (!error)
	{
		ft_putendl("An unexpected error has been thrown");
		return (EXIT_ERROR);
	}
	msg = ft_strjoin(msg, error->trigger);
	msg = ft_strjoin(msg, "' => ");
	msg = ft_strjoin(msg, error->msg);
	ft_putendl(msg);
	if (f)
		f();
	return (EXIT_ERROR);
}
