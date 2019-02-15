/*
 *
 * Author Sarthak Manchanda
 * Date: 15th Feb 2019
 *
 */

#include "ContactList.h"
#include <string>
#include <iostream>
using namespace std;

// constructor
ContactList::ContactList():head(0),size(0){}

// add method
void ContactList::addToHead(const string& name) {
	
	Contact* new_one = new Contact(name);
	
	if (head == 0) {head = new_one;}
	else {
		new_one->next = head;
		head = new_one;
	}
		
	size++;
}



 

