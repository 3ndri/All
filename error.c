/*
** error.c for 106bombyx in /home/richar_x//select/save
** 
** Made by theo richard
** Login   <richar_x@epitech.net>
** 
** Started on  Sat Jan 19 18:35:15 2013 theo richard
** Last update Wed Feb 20 19:19:53 2013 theo richard
*/
#include <unistd.h>
#include <stdlib.h>
#include "allum1.h"
#include "my.h"

void	my_put_error(char c)
{
  write(2, &c, 1);
}

void	my_error(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    my_put_error(str[i++]);
  if (i > 0)
    my_put_error('\n');
  exit(42);
}
