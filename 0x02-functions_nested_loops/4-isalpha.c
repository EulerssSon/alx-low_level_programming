 #include "main.h"
 /**
  * _isalpha - isalpha function
  * @c: c is the paramter
  * Return: 1 on success, 0 on failure
  *
  * Description: find lower or not
  */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 132))
return (1);
else
return (0);
}
