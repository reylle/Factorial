#include <iostream>

using namespace std;

// fat(long value) makes the factorial of 'unsigned long value' using recursivity
unsigned long fact(unsigned long value) {
	return value == 0 ? 1 : value * fact(value - 1);
}

// fatorial(long value) checks if 'int value' is smaller than zero
unsigned long factorial(int value) {
	if (value < 0) {
		printf("Invalid value, negative values are not accepted.\n");
		return -1;
	}
	else {
		return fact(value);
	}
}

// main() is where program execution begins.
int main() {
	unsigned long value = 12;
	printf("%lu", factorial(value));
	return 0;
}
