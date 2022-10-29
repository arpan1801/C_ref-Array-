/*
Name= Arpan Kumar Bartia
reg no:2041002035
branch : cse
section: e
*/
#include <stdio.h>
int main() {
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);
	
	// Declaration and Initialization of array
	int arr[size];
	
	printf("Input %d data: ", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	int target;
	printf("Input Target Element: ");
	scanf("%d", &target);
	
	// Algorithm
	int low = 0, high = size - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;

		if (arr[mid] == target) {
			printf("Found at index %d\n", mid);
			return 0;
		}

		if (arr[mid] < target)
			low = mid + 1;

		else
			high = mid - 1;
	}
	printf("Not Found\n");
	
	return 0;
}

