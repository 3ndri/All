/*
** mlx.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Thu Feb 21 18:27:03 2013 lysandre corjon
** Last update Fri Feb 22 17:07:32 2013 lysandre corjon
*/

#include <stdlib.h>
#include <mlx.h>
#include "bombyx.h"

void    write_in_window(void *mlx_ptr, void *win_ptr, char *str)
{
  mlx_string_put(mlx_ptr, win_ptr, 180, 210, 0x00FFFFFF, str);
}

int	white_window(t_img *img)
{
  int	x = 0;
  int	y;

  while (x <= SCREEN_W)
    {
      y = 0;
      while (y <= SCREEN_H)
	put_pixel_to_image(img, x, y++, WHITE);
      x++;
    }
  return (0);
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
  white_window(img);
  mlx_put_image_to_window(img->mlx_ptr, img->win_ptr, img->img_ptr, 0, 0);
  return (0);
}
