#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int value;
	struct node* next_node;
} node;

typedef struct mylist {
	struct node first_node;
} mylist;

int main() {
	node node1;
	node1.value = 23;
	
	node node2;
	node2.value = 25;
	
	node1.next_node = node2;
	
	mylist linked_list;
	linked_list.first_node = node1;
	
	printf ("First node value: %d\n", node1.value);
	printf ("Second node value: %d\n", node1.next_node.value);
}