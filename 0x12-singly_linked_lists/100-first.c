#include <stdio.h>


/**
 * before_main - prints a string before the main function is executed.
 * Description: functions marked with the constructor attribute are executed
 * 		before the main function, which allows to run code during
 * 		the initialization phase of the program.
 */

void __attriute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("bore my house upon my back!\n");
}
