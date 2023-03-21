/**
 * add: return sum of 2 integers.
 * sub: return substraction of 2 integers.
 * mul: multiplication of 2 integers.
 * div: division of 2 integers.
 * mod: modulo of 2 integers.
 *
 * @a: integer a
 * @b: integer b
 *
 * description: basic arithmetic
 */


int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
