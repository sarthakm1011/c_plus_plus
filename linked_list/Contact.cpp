/*
 *
 * Author: Sarthak Manchanda
 * Date: 15th Feb 2019
 *
 */

#include "Contact.h"

using namespace std;

Contact::Contact(string n):name(n), next(NULL){}

ostream& operator<<(ostream& os, const Contact& c)
{
	return os << "Name: " << c.name;
}



