#include <stdio.h>

int next_permutation(int *arr, int len) {
	int left = len - 2;
	while (left >= 0 && arr[left] >= arr[left+1])
		left--;
	if (left < 0)
		return 0;
	int right = len - 1;
	while (arr[left] >= arr[right])
		right--;
	int t = arr[left];
	arr[left] = arr[right];
	arr[right] = t;
	left++;
	right = len - 1;
	while (left < right)
	{
		int t = arr[left];
		arr[left] = arr[right];
		arr[right] = t;
		left++;
		right--;
	}
	return 1;
}

int main() {
	int len = 4;
	int arr[len];
	for (int i = 0; i < len; i++)
		arr[i] = 10 * (i+1);
	do {
		for (int i = 0; i < len; i++)
			printf(" %d", arr[i]);
		printf("\n");
	} while (next_permutation(arr, len));
}
