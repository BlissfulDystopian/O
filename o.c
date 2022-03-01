#include <stdio.h>
#include <stdlib.h>

//	O(1)
int getFirst(int * n) {
	return n[0];
}

//	O(log n)
int logFunc(int n) {
	int x = 0;
	while(n > 1) {
		n /= 2;
		x++;
	}
	return x;
}

//	O(n)
int sumAll(int* n, size_t size) {
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum += n[i];
	}
	return sum;
}

//	O(n^2)
void printMatrix(int *matrix, size_t m, size_t n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			 printf("%d\t", *matrix++);
		}
		printf("\n");
	}
}

//	O(2^n)
int fib(int n) {
	return (n > 1) ? fib(n - 1) + fib(n - 2) : n;
}
int main() {
	
	return 0;
}
