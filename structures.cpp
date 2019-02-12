#include <iostream>

using namespace std;

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;

};

void printBook(struct Books book) {
	cout << book.title << endl;
	cout << book.author << endl;
	cout << book.subject << endl;
}


void structPointers(struct Books Book1) {
	struct Books *struct_pointer;
	struct_pointer  = &Book1;

	// accesing members of structures using pointers
	cout << struct_pointer -> title << endl; 
}

int main() {
	struct Books Book1; // create an object of book1
	strcpy( Book1.title, "How, hi are you?");
	Book1.book_id = 420;
	structPointers(Book1);

}