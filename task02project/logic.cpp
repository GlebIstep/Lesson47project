#include "logic.h"

//int is_perfect_num(int num) {
//	if (num % 2 == 1) {
//		return false;
//	}
//
//	int sum = 1;
//	int n = num / 2;
//	for (int div = 2; div <= n; div++) {
//		if (num % div == 0) {
//			sum += div;
//		}
//	}
//		
//
//	return sum == num;
//}

int is_perfect_num(int num) {
	if (num % 2 == 1) {
		return false;
	}

	int perfect_array[]{6, 28,8128,33550336, 8589869056,13743828392}

	for (int i = 0; i < size; i++) {
		if (num == perfect_array) {
			return true;
		}
		}
	return false;
}

