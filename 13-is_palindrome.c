#include <stdio.h>
#include <stdlib.h>

/* structure for a singly linked list node */
struct listint_t {
	int data;
	struct listint_t *next;
};

/* function to reverse a linked list */
struct listint_t* reverseList(struct listint_t* head) {
	struct listint_t* prev = NULL;
	struct listint_t* current = head;
	struct listint_t* next = NULL;

	while (current != NULL) {
		next = current ->next;
		current ->next = prev;
		prev = current;
		current = next;
	}

	return prev;
}

/* function to check if a linked list is a palindrome */
int is_palindrome(struct listint_t **head) {
	struct listint_t *slow = *head;
	struct listint_t *fast = *head;
	struct listint_t *prev_slow = *head;
	struct listint_t *mid = NULL;
	int isPalindrome = 1; // Assume the list is a palindrome

	if (*head != NULL && fast->next != NULL) {
	/* Find the middle of the linked list */
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		prev_slow = slow;
		slow = slow->next;
	}

	/* If the list has odd number of nodes, move to the next node */
	if (fast != NULL) {
		mid = slow;
		slow = slow->next;
	}
	
	/* Reverse the second half of the linked list */
	prev_slow->next = NULL;
	struct listint_t* second_half = reverseList(slow);

	/* Compare the first and second halves for palindrome check */
	struct listint_t* first = *head;
	struct listint_t* secind = second_half;
	while (first != NULL && second != NULL) {
		if (first->data != second->data) {
			isPalindrome = 0;
			break;
		}
		first = first->next;
		second = second->next;
	}
	
	/* Restore the original liked list */
	prev_slow->next = reverseList(second_half);
	if (mid != NULL) {
		prev_slow->next = mid;
		mid->next = slow;
	}
}

return isPalindrome;
}

/* Function to create a new node in the linked list */struct listint_t* newNode(int data) {
	struct listint_t* new_node = (struct listint_t*)malloc(sizeof(struct listint_t));
	if (new_node == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

/* Function to insert a new node at the end of the linked list */
void append(struct listint_t** heead_ref, int data) {
	struct listint_t* new_node = newNode(data);
	if (*head_ref == NULL) {
	    *head_ref = new_node;
		return;
	}
	struct listint_t* last = *head_ref;
	while (last->next != NULL) {
		last = last->next;
	}
	last->next = new_node;
}

/* Function to print the linked list */
void printList(struct listint_t * node) {
	while (node != NULL) {
		printf("%d -> ", node->data);
		node = node->next;
	{
	printf("NULL\n");
}

int main() {
	struct listint_t* head = NULL;
	append(&head, 1);
	append(&head, 2);
	append(&head, 3);
	append(&head, 2);
	append(&head, 1);

	printf("Linked list: ");
	printList(head);
	
	int result = is_palindrome(&head);
	if (result) {
		printf("The linked list is a palindrome.\n");
	} else {
		printf("The linked list is not a palindrome.\n");
	}

	return 0;
}
