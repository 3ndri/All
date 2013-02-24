/*
** bombyx.h for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Thu Feb 21 18:50:44 2013 lysandre corjon
** Last update Sun Feb 24 15:54:06 2013 lysandre corjon
*/

#ifndef BOMBYX_H_
# define BOMBYX_H_

# define	BLUE		(0x0000FF)
# define	BLACK		(0x000000)
# define	WHITE		(0xFFFFFF)
# define	MERGE		(100)
# define	SCREEN_H	(600)
# define	SCREEN_W	(800)
# define	ABS(Value)	((Value) < 0 ? ((Value) * (-1)) : (Value))

typedef struct	s_pos
{
  int		x;
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

int	white_window(t_img *);
int	get_max(double);
int	calc_bomb(int, double);
void	draw_graph(t_img *);
double	arrond(double);
int	draw_on_x(t_pos  *, t_pos *, int, t_img *);
int	draw_on_y(t_pos *, t_pos *, int, t_img *);
int	draw_line(t_pos *, t_pos *, int, t_img *);
int	my_error(char *);
double	my_check(int, char **, char **);
int	main(int, char **, char **);
int	init_img(t_img *);
void	my_putchar(char);
void	my_putstr(char *);
int	gere_expose(t_img *);
int	gere_key(int, t_img *);
void	put_pixel_to_image(t_img *, int, int, int);

#endif /* !BOMBYX_H_ */
