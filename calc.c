/*
** calc.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Sun Feb 24 15:19:03 2013 lysandre corjon
** Last update Sun Feb 24 16:15:16 2013 lysandre corjon
*/

#include <stdio.h>

int		calc_bomb(int gen, double k)
{
  double	init = 10;
  int		cur = 1;
  int		res;

  while (cur < gen)
    {
      init = k * init * ((1000 - init) / 1000);
      cur++;
    }
  res = init;
  return (res);
}

int	get_max(double k)
{
  int	gen = 2;
  int	res;
  int	tmp;

  tmp = calc_bomb(1, k);
  while (gen <= 100)
    {
      if ((res = calc_bomb(gen, k)) > tmp)
	tmp = res;
      gen++;
    }
  res = 100;
  if (tmp > 100)
    while (res - tmp < 0)
      tmp += 100;
  return (res);
}
