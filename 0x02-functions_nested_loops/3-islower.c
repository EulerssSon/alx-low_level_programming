 #include "main.h"
 /**
  * _islower - islower function
  *
  * Return: 1 on success, 0 on failure
  *
  * Description: find lower or not
  */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
