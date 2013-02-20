/*
** error.c for 106bombyx in /home/richar_x//select/save
** 
** Made by theo richard
** Login   <richar_x@epitech.net>
** 
** Started on  Sat Jan 19 18:35:15 2013 theo richard
<<<<<<< HEAD
** Last update Wed Feb 20 19:48:34 2013 lysandre corjon
*/
#include <unistd.h>
#include <stdlib.h>

void	my_error(char *str)
{
  write(2, str, strlen(str));
  exit(42);
}
