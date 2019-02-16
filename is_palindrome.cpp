#include <iostream>
#include <string>
using namespace std;

void check(char str[]) {
	int start = 0;
	int last = strlen(str)-1;
	
	while(start < last) {
		if (str[start] != str[last]) {
			cout << "Not a palindrome" <<endl;
			return;
		}
		start++;
		last--;
	}
	cout << "It's a palindrome" << endl;
	return;

}


void check_pointer(char* string) {
	char *start, *last;
	start = string;
	last = string;
	int len = strlen(string)-1;
	
	for(int i=0; i<len; i++) {
		last++;
	}

	while(start < last) {
		if (*start != *last) {
			cout << "Not a palindrome" << endl;
			return;
		}
		start++;
		last--;
	}	

	cout << "it's a palindrome" << endl;
	return;
}

int main() {
	char s1[] = "hello";
	char s2[] = "madam";
	check_pointer(s1);
	check_pointer(s2);
}
