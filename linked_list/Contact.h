/*
 * Author: Sarthak Manchanda
 * Date: 15th Feb 2019
 *
 */

#ifndef CONTACT_H_
#define CONTACT_H_

#include <iostream>
#include <string>


class Contact {
	friend std::ostream& operator<<(std::ostream &os, const Contact& c);
	friend class ContactList;

    public:
	Contact(std::string name = "none");
	
    private:
	std::string name;
	Contact* next;
};


#endif /* CONTACT_H_ */
