/*
** error.c for 106bombyx in /home/richar_x//select/save
** 
** Made by theo richard
** Login   <richar_x@epitech.net>
** 
** Started on  Sat Jan 19 18:35:15 2013 theo richard
** Last update Thu Feb 21 18:11:14 2013 lysandre corjon
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	my_error(char *str)
{
  write(2, str, strlen(str));
  if (strlen(str) != 0)
    my_putchar('\n');
  return (-42);
}
