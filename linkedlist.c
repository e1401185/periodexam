#include <gtest/gtest.h>
#include <stdio.h>
#include "linked_list.h"



int add_to_list(linked_list *ll, char *s)
{
	int i = 0;
	while(ll->next != NULL)
	{	
		ll = ll->next;
		i++;
	}	
	
		ll->next = (linked_list *) malloc(sizeof(linked_list)); 
		ll->data = s;
		ll->next->next = NULL;
		return i;
	}


int linkedlist_status(linked_list *ll)
{
	int i = 0;
	
	while(ll->next != NULL)
		{
		ll = ll->next;
		i++;
		}
	
	return i;
	
}
	
	
/*
int display_item(linked_list *ll)
{
	
	while (ll->data != NULL)
	{
		
		printf("Data: %s\n", ll->data);
		ll = ll->next;
		
	}

//segmentation faultti

}
*/

