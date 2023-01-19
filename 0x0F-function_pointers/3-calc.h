#ifndef  _HEADER
#define  _HEADER

/**
 * struct op - Struct op
 *
 * @op: Operator pointer  param
 * @f: function attached to op pointer char
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
