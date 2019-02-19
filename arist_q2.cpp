#include <stdlib.h>
#include <stdio.h>

void find(int arr[], int n) {
	//sum = ((n+1) * (n+2)) / 2 // because we are adding the one number that is missing as well
	int d = n+1;
	for(int i=0; i<n; i++) {d += ((i+1)-arr[i]);}
	printf("%d", d);
	return;
}

int main() {
	int a[6] = {1,2,3,5,6,7};
	find(a,6);
}
	
