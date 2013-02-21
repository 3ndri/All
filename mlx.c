/*
** mlx.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Thu Feb 21 18:27:03 2013 lysandre corjon
** Last update Thu Feb 21 18:35:21 2013 lysandre corjon
*/

#include "bombyx.h"

int	init_img(t_img *img)
{
  if ((img->mlx_ptr = mlx_init()) == NULL)
    return (-1);
  img->win_ptr = mlx_new_window(img->mlx_ptr, SCREEN_W, SCREEN_H, "106bombyx");
  img->img_ptr = mlx_new_image(img->mlx_ptr, SCREEN_W, SCREEN_H);
  img->data = mlx_get_data_addr(img->img_ptr, &img->bpp, &img->sizeline, &img->endian);
  return (0);
}
