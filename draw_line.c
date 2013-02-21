/*
** draw_line.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Thu Feb 21 17:50:40 2013 lysandre corjon
** Last update Thu Feb 21 18:04:13 2013 lysandre corjon
*/

#include <mlx.h>
#include <stdio.h>
#include "bombyx.h"

int	draw_on_x(t_pos  *f_pos, t_pos *s_pos, int color, t_mlx *param)
{
  int	x;
  int	y;

  if (f_pos->x < s_pos->x)
    {
      x = f_pos->x;
      while (x <= s_pos->x)
	{
	  y = f_pos->y + ((s_pos->y-f_pos->y) * (x-f_pos->x))/(s_pos->x-f_pos->x);
	  my_pixel_put_to_image(x, y, color, param);
	  x++;
	}
    }
  if (f_pos->x > s_pos->x)
    {
      x = s_pos->x;
      while (x <= f_pos->x)
	{
	  y = s_pos->y + ((f_pos->y-s_pos->y)*(x-s_pos->x))/(f_pos->x-s_pos->x);
	  my_pixel_put_to_image(x, y, color, param);
	  x++;
	}
    }
  return (0);
}

int	draw_on_y(t_pos *f_pos, t_pos *s_pos, int color, t_mlx *param)
{
  int	x;
  int	y;

  if (f_pos->y < s_pos->y)
    {
      y = f_pos->y;
      while (y <= s_pos->y)
	{
	  x = f_pos->x + ((s_pos->x-f_pos->x)*(y-f_pos->y))/(s_pos->y-f_pos->y);
	  my_pixel_put_to_image(x, y, color, param);
	  y++;
	}
    }
  if (f_pos->y > s_pos->y)
    {
      y = s_pos->y;
      while (y <= f_pos->y)
	{
	  x = s_pos->x + ((f_pos->x-s_pos->x)*(y-s_pos->y))/(f_pos->y-s_pos->y);
	  my_pixel_put_to_image(x, y, color, param);
	  y++;
	}
    }
  return (0);
}

int	draw_line(t_pos *f_pos, t_pos *s_pos, int color, t_mlx *param)
{
  int	x_diff;
  int	y_diff;

  x_diff = ABS(s_pos->x - f_pos->x);
  y_diff = ABS(s_pos->y - f_pos->y);
  if (y_diff >= x_diff)
    draw_on_y(f_pos, s_pos, color, param);
  else if (y_diff < x_diff)
    draw_on_x(f_pos, s_pos, color, param);
  return (0);
}
