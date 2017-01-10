/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 16:46:57 by mcourtia          #+#    #+#             */
/*   Updated: 2016/01/23 13:22:09 by mcourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILLIT_H
# define FT_FILLIT_H
# include <fcntl.h>
# include "libft/libft.h"

# define BUF_SIZE 1024

int			main(int argc, char **argv);
void		ft_error(void);
int			ft_conditions(char *str);
char		**ft_split(char *str);
void		ft_resplit(char **tab);
char		**ft_setupleft(char **tab);
void		ft_createmap(char ***tetro, int n);
void		ft_remap(char ***tetro, char **map, int nbtetro, int i);
void		ft_createtmp(char ***tetro, char **map, int nbtetro, int i);
int			ft_checkmap(char ***tetro, char **map, char ***tmp, int i);
char		***ft_right(char ***tmp, char *map, int i);
char		***ft_down(char ***tmp, char ***tetro, char *map, int i);
void		ft_print(char **map, int nbtetro);

#endif
