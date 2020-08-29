// 문제 : 네 값의 최솟값을 구하는 min4 함수를 작성하세요.

#include <stdio.h>
#include <stdlib.h>

int min4(int a, int b, int c, int d)
{
	int min1 = a < b ? a : b;
	int min2 = c < d ? c : d;

	return (min1 < min2 ? min1 : min2);
}

int main(int args, char **input)
{
	args = 1;
	printf("%d\n", min4(atoi(input[1]), atoi(input[2]), atoi(input[3]), atoi(input[4])));
}