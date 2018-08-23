/*
 * 练习题 2.68
 *
 * 写出具有如下原型的函数的代码
 *
 * Make with least signficant n bits set to 1
 * Example: n = 6 --> 0x3f, n = 17 --> 0x1FFFF
 * Assume 1 <= n <= w
 *
 *         int lower_one_mask(int x, int n);
 *
 * 函数应该遵循位级整数编码规则。要注意 n = w 的情况
 */

#include <stdio.h>

int lower_one_mask(int n) {
	return (1<< (n-1))-1 | (1<<(n-1));
}

int main() {
	printf("%d\n", lower_one_mask(6));
	printf("%d\n", lower_one_mask(17));
	printf("%d\n", lower_one_mask(1));
	printf("%d\n", lower_one_mask(32));
}
