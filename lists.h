#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
* struct listint_s - linked list node
* @n: integer data
* @next: point to the next node
*
* Description: Definition of a singly linked list node* for a coding project.
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
* print_listint - prints the elements of a linked list* @h: pointer to the head of the list
* Return: Number of node in the list
*/
size_t print_listint(const listint_t *h)

/**
* add_nodeint_end - Adds a new node at the end of a linked list
* @head: pointer to the head of the list
* @n: Integer data for the new node
* Return: pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
* free_listint - Frees a linked list
* @head: pointer to the head of the list
*/
void free_listint(listint_t *head);

/**
* is_palindrome - checks if a linked list is a palindrome
* @head: pointer to a pointer to the head of the list
* Return: 1 if the list is a palindrome, 0 otherwise
*/
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
