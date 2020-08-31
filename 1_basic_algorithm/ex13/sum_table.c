// 문제 : 곱셈이 아니라 덧셈을 출력하는 프로그램을 작성하세요.

#include <stdio.h>

#define SIZE 10

int main(void)
{
	printf("    |");
	for (int i = 1; i < SIZE; i++)
		printf("% 4d", i);
	printf("\n----+");
	for (int i = 1; i < SIZE; i++)
		printf("----");
	printf("-\n");
	for (int i = 1; i < SIZE; i++)
	{
		printf("% 3d |", i);
		for (int j = 1; j < SIZE; j++)
			printf("% 4d", i + j);
		printf("\n");
	}
}
