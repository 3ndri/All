/*
** error.c for 106bombyx in /home/richar_x//select/save
** 
** Made by theo richard
** Login   <richar_x@epitech.net>
** 
** Started on  Sat Jan 19 18:35:15 2013 theo richard
<<<<<<< HEAD
** Last update Wed Feb 20 19:40:47 2013 theo richard
*/
#include <unistd.h>
#include <stdlib.h>
=======
** Last update Wed Feb 20 19:36:56 2013 lysandre corjon
*/
>>>>>>> c847af8a95b3ddb901515b9e5e08c3b314ba767c

#include <string.h>
#include <unistd.h>

void	my_error(char *str)
{
  write(2, str, strlen(str));
  exit(42);
}
