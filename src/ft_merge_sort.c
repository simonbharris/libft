#include <libft.h>

static t_list *merge_lists(t_list *t1, t_list *t2, int (cmp)(void*,void*))
{
	t_list head;
	t_list *node;

	head.next = NULL;
	node = &head;
	while (t1 && t2)
	{
		if (cmp(t1->content, t2->content) > 0)
		{
			node->next = t2;
			t2 = t2->next;
		}
		else
		{
			node->next = t1;
			t1 = t1->next;
		}
		node = node->next;
	}
	node->next = t1 ? t1 : t2;
	return (head.next);
}


t_list *ft_merge_sort(t_list *head, int cmp(void *, void *))
{
	t_list *pre;
	t_list *slow;
	t_list *fast;

	pre = (fast = (slow = (head)));
	if (!head || !head->next)
		return (head);
	while (fast && fast->next)
	{
		pre = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	pre->next = NULL;
	return(merge_lists(ft_merge_sort(head, cmp),
		ft_merge_sort(slow, cmp), cmp));
}
