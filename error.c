/*
** error.c for 106bombyx in /home/richar_x//select/save
** 
** Made by theo richard
** Login   <richar_x@epitech.net>
** 
** Started on  Sat Jan 19 18:35:15 2013 theo richard
<<<<<<< HEAD
** Last update Wed Feb 20 19:51:53 2013 theo richard
*/
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	my_error(char *str)
{
  write(2, str, strlen(str));
  if (strlen(str) != 0)
    my_putchar('\n');
  exit(42);
}
