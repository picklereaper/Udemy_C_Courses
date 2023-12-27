#include<stdio.h>
#include<stdlib.h>

int main(){

	printf("Size of integer: %ld\n", sizeof(int));
	printf("Size of character: %ld\n", sizeof(char));
	printf("Size of a long: %ld\n", sizeof(long));
	printf("Size of a long long: %ld\n", sizeof(long long));
	printf("Size of a double: %ld\n", sizeof(double));
	printf("Size of a long double: %ld\n", sizeof(long double));
	printf("Size of a short: %ld\n", sizeof(short));

	return 0;
}