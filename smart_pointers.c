#include <stdio.h>
#include <csptr/smart_ptr.h>

int main() {
	
	smart int *ptr = unique_ptr(int,1);
	printf("%p = %d\n", ptr, *ptr);
	return 0;
}
