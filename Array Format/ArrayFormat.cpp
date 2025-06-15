#include <stdio.h>

int main(){

	int size;										// Biến nhập vào kích thước của mảng
	do{
		printf("Nhập số lượng các phần tử: ");
		scanf("%d", &size);
	}while(size <= 0);

	int num[size];			// Mảng num

	for(int i = 0; i < size; i ++){
		printf("Nhập phần tử vào mảng: ");			// Biến i - Nhập thủ công từng phần tử vào mảng
		scanf("%d", &num[i]);
	}
}