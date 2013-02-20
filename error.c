/*
** error.c for 106bombyx in /home/richar_x//select/save
** 
** Made by theo richard
** Login   <richar_x@epitech.net>
** 
** Started on  Sat Jan 19 18:35:15 2013 theo richard
** Last update Wed Feb 20 19:29:45 2013 lysandre corjon
*/

#include <string.h>
#include <unistd.h>

void	my_error(char *str)
{
  write(2, str, strlen(str));
  return;
}
