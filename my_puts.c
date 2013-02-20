/*
** my_puts.c for 106bombyx in /home/richar_x//All
** 
** Made by theo richard
** Login   <richar_x@epitech.net>
** 
** Started on  Wed Feb 20 19:14:44 2013 theo richard
** Last update Wed Feb 20 19:19:06 2013 lysandre corjon
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
  return;
}

void	my_putstr(char *str)
{
  int	i = 0;

  while (str[i] != '\0')
    my_putchar(str[i++]);
  return;
}
