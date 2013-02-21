/*
** bombyx.h for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Wed Feb 20 19:11:25 2013 lysandre corjon
** Last update Thu Feb 21 18:26:28 2013 lysandre corjon
*/

#ifndef BOMBYX_H_
# define BOMBYX_H_

# define	SCREEN_H	(600)
# define	SCREEN_W	(600)
# define	ABS(Value)	((Value) < 0 ? ((Value) * (-1)) : (Value))

typedef struct	s_pos
{
  int	        x;
  int		y;
}		t_pos;

typedef struct	s_img
{
  void		*mlx_ptr;
  void		*img_ptr;
  void		*win_ptr;
  int		bpp;
  int		endian;
  int		sizeline;
  char		*data;
}		t_img;

#endif /* !BOMBYX_H_ */
