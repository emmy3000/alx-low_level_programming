#include <stdio.h>

/**
 * initialMsgFn -applies a constructor attribute to initialMsgFn
 * enabling it to be executed before the main()
 */

void initialMsgFn(void) __attribute__ ((constructor));

/* function implementation */

void initialMsgFn(void)
{
	printf("You're beat! and yet, you must allow.\n"};
	printf("I bore my house upon my back!\n");
}
