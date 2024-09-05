#ifndef _LISTS_H
#define _LISTS_H


#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: lenght of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;




int _putchar(char c);




#endif  /** _LISTS_H */
