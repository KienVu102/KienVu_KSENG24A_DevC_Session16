#include <stdio.h>

void ptr(int arr[], int newNumber, int index){
	int *ptr = arr;
	ptr[index - 1] = newNumber;
	for(int i = 0; i < 5; i++){
		printf("%d ", ptr[i]);
	}
}
int main(){
	int newNumber, index;
	int arr[100] = {1,2,3,4,5};
	printf("Nhap so ban muon cap nhat: ");
	scanf("%d", &newNumber);
	printf("Nhap vi tri ban muon cap nhat: ");
	scanf("%d", &index);
	ptr(arr, newNumber, index);
	return 0;
}
