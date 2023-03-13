#include <stdio.h>
#include <string.h>
#include <conio.h>

void changeSymbol()
{
  char r;
  char str[100];
  char str2[100];
  printf("Enter first string: ");
  gets(str);
  printf("Enter simbol: ");
  r = getch();
  printf("%c\n",r);
  str[0] = r;
  str[strlen(str)-1] = r;
  printf("String with first and last letter changed: ");
  puts(str);
}

void removeSpace()
{
  char str[100];
  char str2[100];
  printf("Enter second string: ");
  gets(str);
  int start = 0, end = strlen(str);
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] != ' ')
    {
      break;
    }
    else
    {
      start++;
    }
  }

  for (int x = (strlen(str))-1; x > 0; x--)
  { 
    if (str[x] != ' ')
    {
      break;
    }
    else
    {
      end--;
    }
  }
  int j = 0;
  for (int i = start; i < end; i++)
  {
    str2[j] = str[i];
    j++;
  }
  str2[j] = str[strlen(str)];
  printf("String with leading and trailing whitespace removed: ");
  puts(str2);
}

int main()
{
  changeSymbol();
  removeSpace();  
  return 1;
}
