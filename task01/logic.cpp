#include "logic.h"

int calculate_max_number(int num) {
	int value = num % 10;

	while (num > 0) {
		num /= 10;
		int digit = num % 10;
		
		if (digit > value) {
			value = digit;
		}

		if (digit == 9) {
			break;
		}
	}

	return value;
}

int calculate_min_number(int num) {
	int value = num % 10;

	while (num > 0) {
		num /= 10;
		int digit = num % 10;

		if (digit < value) {
			value = digit;
		}

		if (digit == 0) {
			break;
		}
	}

	return value;
}

