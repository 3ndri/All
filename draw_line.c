/*
** draw_line.c for fdf in /home/letohi_f//igraph
** 
** Made by florian letohic
** Login   <letohi_f@epitech.net>
** 
** Started on  Tue Dec  6 20:50:11 2011 florian letohic
** Last update Sun Dec 11 16:23:10 2011 florian letohic
*/

#include <mlx.h>
#include <stdio.h>
#include "header.h"

int	absolute(int value)
{
  if (value < 0)
    return (value * -1);
  return (value);
}

int	draw_on_x(t_pos  *co1, t_pos *co2, int color, t_mlx *param)
{
  int	x;
  int	y;

  if (co1->x < co2->x)
    {
      x = co1->x;
      while (x <= co2->x)
	{
	  y = co1->y + ((co2->y-co1->y) * (x-co1->x))/(co2->x-co1->x);
	  my_pixel_put_to_image(x, y, color, param);
	  x++;
	}
    }
  if (co1->x > co2->x)
    {
      x = co2->x;
      while (x <= co1->x)
	{
	  y = co2->y + ((co1->y-co2->y)*(x-co2->x))/(co1->x-co2->x);
	  my_pixel_put_to_image(x, y, color, param);
	  x++;
	}
    }
  return (0);
}

int	draw_on_y(t_pos *co1, t_pos *co2, int color, t_mlx *param)
{
  int	x;
  int	y;

  if (co1->y < co2->y)
    {
      y = co1->y;
      while (y <= co2->y)
	{
	  x = co1->x + ((co2->x-co1->x)*(y-co1->y))/(co2->y-co1->y);
	  my_pixel_put_to_image(x, y, color, param);
	  y++;
	}
    }
  if (co1->y > co2->y)
    {
      y = co2->y;
      while (y <= co1->y)
	{
	  x = co2->x + ((co1->x-co2->x)*(y-co2->y))/(co1->y-co2->y);
	  my_pixel_put_to_image(x, y, color, param);
	  y++;
	}
    }
  return (0);
}

int	draw_line(t_pos *co1, t_pos *co2, int color, t_mlx *param)
{
  int	xdiff;
  int	ydiff;

  xdiff = absolute(co2->x - co1->x);
  ydiff = absolute(co2->y - co1->y);
  if (ydiff >= xdiff)
    draw_on_y(co1, co2, color, param);
  else if (ydiff < xdiff)
    draw_on_x(co1, co2, color, param);
  return (0);
}
