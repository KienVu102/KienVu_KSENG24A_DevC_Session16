#include <stdio.h>

void ptr(int arr[]) {
	int ptr = *arr;
    for (int i = 0; i < 5; i++) {
        printf("Phan tu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    ptr(arr);
    return 0;
}

