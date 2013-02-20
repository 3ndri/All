/*
** main.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Wed Feb 20 18:43:36 2013 lysandre corjon
** Last update Wed Feb 20 19:41:25 2013 theo richard
*/
#include <stdlib.h>
#include <stdio.h>

double		my_check(int argc, char **argv, char **env)
{
  double	k;

  if (argc == 1)
    my_error("error: missing parameter.");
  if (argc != 2)
    my_error("error: too many parameters.");
  if (env[0] == NULL)
    my_error("error: missing environment.");
  k = atof(argv[1]);
  if (k > 4 || k < 1)
    my_error("error: parameter must be between 1 and 4.");
  return (k);
}

int		main(int argc, char **argv, char **env)
{
  double	k;

  k = my_check(argc, argv, env);
  printf("k = %f\n", k);
  return (0);
}
