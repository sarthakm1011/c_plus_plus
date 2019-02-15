#include <iostream>
using namespace std;

int getMissingNumber(int a[], int n) {
	int i, total;
	total = (n+1)*(n+2) / 2;
	for (i=0; i<n; i++) {
		total -= a[i];
	}	
	return total;
}

int getMissingNumber2(int a[], int n) {
	
	int x1 = a[0];
	int x2 = 1;
	
	for (int i=1; i<n; i++) {
		x1 = x1 ^ a[i];
	}
	
	for (int i=2; i<n+1; i++) {
		x2 = x2 ^ i;
	}	
		
	return (x1^x2);
}

int main() {
	int a[] = {1,2,4,5,6};
	int miss = getMissingNumber2(a,5);
	cout << miss << endl;
}
