#include <iostream>
using namespace std;

void remove_list_entry(entry) {
	indirect = &head;
	while ((*indirect) != entry)
		indirect = &(*indirect)->next;
	*indirect = entry->next;
} 
