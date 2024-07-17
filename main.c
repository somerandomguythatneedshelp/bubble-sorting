#include <stdio.h>

int ascending(int a, int b) {
	return a > b;
}

int descending(int a, int b) {
	return a < b;
}	

void bubble_sort(int arr[], int size, int (*compare)(int, int)) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (compare(arr[j], arr[j + 1])) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void print_array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int data[] = { 12, 8, 7, 5, 3};

	printf("Original array: ");
	print_array(data, 5);

	bubble_sort(data, 5, &ascending);
	printf("Ascending order: ");
	print_array(data, 5);

	bubble_sort(data, 5, &descending);
	printf("Descending order: ");
	print_array(data, 5);

	return 0;
}
