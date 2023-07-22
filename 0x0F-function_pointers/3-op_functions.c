#include "3-calc.h"
/**
 * op_add - function gives the sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	int sum = a + b;
	return (sum);
}
/**
 * op_sub - returns the difference of a and b.
 * @a: first number.
 * @b: second number.
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the multiplication of a and b.
 * @a: first number.
 * @b: second number.
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of a by b.
 * @a: first number.
 * @b: second number.
 * Return: a / b.
 */
int op_div(int a, int b)
{
	return (a / b);

}
/**
 * op_mod - returns the reminder of the division of a by b.
 * @a: first number.
 * @b: second number.
 * Return: a % b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
