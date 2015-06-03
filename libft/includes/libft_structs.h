/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_structs.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/24 13:40:01 by kcouliba          #+#    #+#             */
/*   Updated: 2014/10/07 15:57:05 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRUCTS_H
# define LIBFT_STRUCTS_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>

# define KNRM			"\x1B[0m"
# define KRED			"\x1B[31m"
# define KGRN			"\x1B[32m"
# define KYEL			"\x1B[33m"
# define KBLU			"\x1B[34m"
# define KMAG			"\x1B[35m"
# define KCYN			"\x1B[36m"
# define KWHT			"\x1B[37m"
# define MAX_BUFF_SIZE	32

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef	struct		s_prog
{
	int				argc;
	char			**argv;
}					t_prog;

typedef	struct		s_error
{
	size_t			fatal;
	int				num;
	char			*msg;
	char			*trigger;
}					t_error;

#endif
