#include <iostream>
using namespace std;

// Function to swap two memory contents
void swap(int* a, int* b) 
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Function to reverse array through pointers
void reverse(int* arr, int arr_size) 
{
	// pointer pointing at the beginning of the array
	int *pointer1 = arr;
	int *pointer2 = arr + arr_size - 1;

	while (pointer1 < pointer2) {
		swap(pointer1, pointer2);
		pointer1++;
		pointer2--;
	}
}


// Function to print an array
void print(int* arr, int arr_size) 
{
	int *length = arr + arr_size; // Length pointing at the end of the array
	int *position = arr;  // start of the array

	cout << "Array = ";
	for (position = arr; position < length; position++) {
		cout << *position << " ";
	}
}



int main() 
{
	int array[] = {1,2,3,4,5,10,-1,11};

	cout << "Original" << endl;
	print(array,8);

	cout << "Reverse";
	reverse(array,8);
	print(array, 8);

}