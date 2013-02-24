/*
** tools.c for 106bombyx in /home/corjon_l//projets/All
** 
** Made by lysandre corjon
** Login   <corjon_l@epitech.net>
** 
** Started on  Sun Feb 24 13:49:18 2013 lysandre corjon
** Last update Sun Feb 24 14:10:32 2013 lysandre corjon
*/

#include <math.h>

double		arrond(double k)
{
  double	under;

  under = floor(k);
  while (under < k)
    {
      if ((k - under) >= 0.05 && (k - under) < 0.10)
	return (under + 0.1);     
      else if ((k - under) > 0.00 && (k - under) < 0.05)
	return (under);
      
	
      else
	under += 0.1;
    }
  return (k);
}
