/*
** main.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Wed Feb 20 18:43:36 2013 lysandre corjon
** Last update Fri Feb 22 16:39:36 2013 theo richard
*/

#include <stdlib.h>
#include <stdio.h>
#include "bombyx.h"

double		my_check(int argc, char **argv, char **env)
{
  double	k;

  if (argc < 2)
    return (my_error("error: Missing parameter."));
  if (argc > 3)
    return (my_error("error: Too many parameters."));
  if (env[0] == NULL)
    return (my_error("error: Missing environment."));
  k = atof(argv[1]);
  if (k > 4 || k < 1)
    return (my_error("error: Parameter must be between 1 and 4."));
  return (k);
}

int		main(int argc, char **argv, char **env)
{
  double	k;
  t_img		*img;

  img = NULL;
  if ((k = my_check(argc, argv, env)) < 0)
    return (k);
  printf("k = %f\n", k);
  if (init_img(img) != 0)
    return (42);
  while (42);
  return (0);
}
