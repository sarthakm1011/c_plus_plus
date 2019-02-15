/*
 *
 * Author: Sarthak Manchanda
 * Date: 15th Feb 2019
 *
 *
 */

#include "ContactList.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	ContactList* l1 = new ContactList();
	
	string name;

	while(true) {
		cout << "Enter the name of contact or q to quit." << endl;
		cin >> name;
		if (name == "q")
			break;
		l1->addToHead(name);
	}
}
