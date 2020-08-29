// 문제 : 네 값의 최대값을 구하는 함수 max4를 작성하세요.

#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max1 = a > b ? a : b;
	int max2 = c > d ? c : d;

	return (max1 > max2 ? max1 : max2);
}

int main(void)
{
	printf("%d\n", max4(3, 5, 1, 2));
}