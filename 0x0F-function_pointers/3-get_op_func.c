#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the operator given as a
 * parameter. If s does not match any of the 5 expected operators
 * (+, -, *, /, %), return NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, /* 0 */
		{"-", op_sub}, /* 1 */
		{"*", op_mul}, /* 2 */
		{"/", op_div}, /* 3 */
		{"%", op_mod}, /* 4 */
		{NULL, (int (*)(int, int))NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
