/*
 *
 * Author Sarthak Manchanda
 * Date 15th Feb 2019
 *
 *
 */

#ifndef CONTACTLIST_H_
#define CONTACTLIST_H_

#include "Contact.h"

class ContactList 
{
    public:
	ContactList();
	void addToHead(const std::string&);

    private:
	Contact* head;
	int size;	
};

#endif
