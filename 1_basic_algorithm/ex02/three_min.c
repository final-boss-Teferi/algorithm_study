// 문제 : 세 값의 최솟값을 구하는 min3 함수를 작성하세요.

#include <stdio.h>
#include <stdlib.h>

int min3(int a, int b, int c)
{
	int min = a < b ? a : b;
	return (min < c ? min : c);
}

int main(int args, char **input)
{
	args = 1;
	printf("%d\n", min3(atoi(input[1]), atoi(input[2]), atoi(input[3])));
}
