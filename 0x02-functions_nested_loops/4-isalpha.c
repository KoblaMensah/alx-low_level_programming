#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: parameter of type int
 *
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
