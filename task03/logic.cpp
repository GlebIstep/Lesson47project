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

int count3(int num, int multiple) {
	return multiple * (1 + num) * num / 2;
}
int count5(int num) {
	return 5 * (1 + num) * num / 2;
}
int count15(int num) {
	return 15 * (1 + num)* num / 2;
}
int sum(int num) {
	return count_multiples(num, 3);
	+count_multiples(num, 5);
	-count_multiples(num, 15);
}