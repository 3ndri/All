/*
** mlx.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Thu Feb 21 18:27:03 2013 lysandre corjon
** Last update Fri Feb 22 16:44:48 2013 theo richard
*/

#include <stdlib.h>
#include <mlx.h>
#include "bombyx.h"

void    write_in_window(void *mlx_ptr, void *win_ptr, char *str)
{
  mlx_string_put(mlx_ptr, win_ptr, 180, 210, 0x00FFFFFF, str);
}

int	init_img(t_img *img)
{
  if (img == NULL)
    if ((img = malloc(sizeof(*img))) == NULL)
      return (my_error("error : Malloc failed"));
  if ((img->mlx_ptr = mlx_init()) == NULL)
    return (-1);
  img->win_ptr = mlx_new_window(img->mlx_ptr, SCREEN_W, SCREEN_H, "106bombyx");
  img->img_ptr = mlx_new_image(img->mlx_ptr, SCREEN_W, SCREEN_H);
  img->data = mlx_get_data_addr(img->img_ptr, &img->bpp, &img->sizeline, &img->endian);
  return (0);
}
