/*
** main.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Wed Feb 20 18:43:36 2013 lysandre corjon
** Last update Sun Feb 24 15:58:57 2013 lysandre corjon
*/

#include <stdlib.h>
#include <stdio.h>
#include <mlx.h>
#include "bombyx.h"

double		my_check(int argc, char **argv, char **env)
{
  if (argc < 2)
    return (my_error("error: Missing parameter."));
  if (argc > 3)
    return (my_error("error: Too many parameters."));
  if (env[0] == NULL)
    return (my_error("error: Missing environment."));
  if (argc == 2)
    {
      if (atof(argv[1]) < 1 || atof(argv[1]) > 4)
	return (my_error("error: Parameter must be between 1 and 4."));
    }
  if (argc == 3)
    {
      if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
	return (my_error("error: Need a postiv number please."));
    }
  return (0);
}

int	second_part(int start, int end)
{
  printf("%d %d\n", start, end);
  return (0);
}

int	first_part(double k)
{
  int	gen = 1;
  int	max;
  t_img	*img;
  t_pos	f_pos;
  t_pos	s_pos;

  img = NULL;
  k = arrond(k);
  max = get_max(k);
  if (init_img(img) != 0)
    return (-1);
  img->mlx_ptr = mlx_init();
  img->win_ptr = mlx_new_window(img->mlx_ptr, SCREEN_W, SCREEN_H, "106bombyx");
  img->img_ptr = mlx_new_image(img->mlx_ptr, SCREEN_W, SCREEN_H);
  img->data = mlx_get_data_addr(img->img_ptr, &img->bpp, &img->sizeline, &img->endian);
  white_window(img);
  draw_graph(img);
  mlx_put_image_to_window(img->mlx_ptr, img->win_ptr, img->img_ptr, 0, 0); 
 while (42);
  while (gen < 100)
    {
      f_pos.x = MERGE + ((SCREEN_W - 2 * MERGE) * gen / 100);
      f_pos.y = SCREEN_H - MERGE - ((SCREEN_H - 2 * MERGE) * calc_bomb(gen, k) / max);
      s_pos.x = MERGE + ((SCREEN_W - 2 * MERGE) * (gen + 1) / 100);
      s_pos.y = SCREEN_H - MERGE - ((SCREEN_H - 2 * MERGE) * calc_bomb(gen + 1, k) / max);
      draw_line(&f_pos, &s_pos, BLUE, img);
      gen++;
    }
  while (42);
  return (0);
}

int		main(int argc, char **argv, char **env)
{
  if (my_check(argc, argv, env) < 0)
    return (-1);
  if (argc == 2)
    {
      if (first_part(atof(argv[1])) != 0)
	return (-2);
    }
  else
    {
      if (second_part(atoi(argv[1]), atoi(argv[2])) != 0)
	return (-3);
    }
  return (0);
}
