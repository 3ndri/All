/*
** draw_line.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Thu Feb 21 17:50:40 2013 lysandre corjon
** Last update Thu Feb 21 18:22:59 2013 lysandre corjon
*/

#include <mlx.h>
#include <stdio.h>
#include "bombyx.h"

int	draw_on_x(t_pos  *f_pos, t_pos *s_pos, int color, t_img *img)
{
  int	x;
  int	y;

  if (f_pos->x < s_pos->x)
    {
      x = f_pos->x;
      while (x <= s_pos->x)
	{
	  y = f_pos->y + ((s_pos->y-f_pos->y) * (x-f_pos->x))/(s_pos->x-f_pos->x);
	  put_pixel_to_image(img, x, y, color);
	  x++;
	}
    }
  if (f_pos->x > s_pos->x)
    {
      x = s_pos->x;
      while (x <= f_pos->x)
	{
	  y = s_pos->y + ((f_pos->y-s_pos->y)*(x-s_pos->x))/(f_pos->x-s_pos->x);
	  put_pixel_to_image(img, x, y, color);
	  x++;
	}
    }
  return (0);
}

int	draw_on_y(t_pos *f_pos, t_pos *s_pos, int color, t_img *img)
{
  int	x;
  int	y;

  if (f_pos->y < s_pos->y)
    {
      y = f_pos->y;
      while (y <= s_pos->y)
	{
	  x = f_pos->x + ((s_pos->x-f_pos->x)*(y-f_pos->y))/(s_pos->y-f_pos->y);
	  put_pixel_to_image(img, x, y, color);
	  y++;
	}
    }
  if (f_pos->y > s_pos->y)
    {
      y = s_pos->y;
      while (y <= f_pos->y)
	{
	  x = s_pos->x + ((f_pos->x-s_pos->x)*(y-s_pos->y))/(f_pos->y-s_pos->y);
	  put_pixel_to_image(img, x, y, color);
	  y++;
	}
    }
  return (0);
}

int	draw_line(t_pos *f_pos, t_pos *s_pos, int color, t_img *img)
{
  int	x_diff;
  int	y_diff;

  x_diff = ABS(s_pos->x - f_pos->x);
  y_diff = ABS(s_pos->y - f_pos->y);
  if (y_diff >= x_diff)
    draw_on_y(f_pos, s_pos, color, img);
  else if (y_diff < x_diff)
    draw_on_x(f_pos, s_pos, color, img);
  return (0);
}
