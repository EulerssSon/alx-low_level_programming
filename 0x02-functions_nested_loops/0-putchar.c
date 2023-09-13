 #include "main.h"
 /**
  * main - main function
  *
  * Return: 0 on success, 1 on failure
  *
  * Description: print _putchar
 */
 int main(void)
 {
 char str[] = "_putchar";
 int i; 
 for (i = 0; i < 8; i++)
 {
 _putchar(str[i]);
 }
 _putchar('\n');
 return (0);
 }
