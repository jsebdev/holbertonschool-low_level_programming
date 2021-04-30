#include "lists.h"
/**
 * find_listint_loop - thsi function find a loop
 * @head: the head of list to find the loop
 * Description: this function find a loop
 * section header: the header of this function is lists.h)*
 * Return: the node were the loop is located
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list1, *list2;

	list1 = head;
	list2 = list1;
	while (list1 && list2 && list2->next)
	{
		list1 = list1->next;
		list2 = list2->next->next;
		if (list1 == list2)
		{
			list1 = head;
			while (list1 && list2)
			{
				if (list1 == list2)
					return (list1);
				list1 = list1->next;
				list2 = list2->next;
			}
		}
	}
	return ('\0');
}
