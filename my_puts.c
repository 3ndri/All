/*
** my_puts.c for 106bombyx in /home/richar_x//All
** 
** Made by theo richard
** Login   <richar_x@epitech.net>
** 
** Started on  Wed Feb 20 19:14:44 2013 theo richard
** Last update Wed Feb 20 19:17:11 2013 theo richard
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
