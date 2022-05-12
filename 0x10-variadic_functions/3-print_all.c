#include "variadic_functions.h"
/**
 * integer_print - print integers.
(* a blank line
*@args: the list of parameters
* Description: this function prints integers)?
(* section header: the header of this function is variadic_functions.h)*
* Return:no return a void func.
*/
void integer_print(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * char_print - print chars.
(* a blank line
*@args: the list of parameters
* Description: this function prints chars)?
(* section header: the header of this function is variadic_functions.h)*
* Return:no return a void func.
 */
void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * string_print - print strings
(* a blank line
*@args: the list of parameters
* Description: this function prints strings)?
(* section header: the header of this function is variadic_functions.h)*
* Return:no return a void func.
*/

void string_print(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

