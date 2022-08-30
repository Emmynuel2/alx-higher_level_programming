#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * @next: points to the next node
 * for project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t print_listint(const listint_t *h);
size_t print_listint(const listint_t *h);

int is_palindrome(listint_t **head);
int listint_len(listint_t *h);
void print_python_list_info(PyObject *p)

#endif /* LISTS_H */
