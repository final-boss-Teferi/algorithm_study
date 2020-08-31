// 문제 : 아래과 같이 위쪽과 왼쪽에 곱하는 수가 있는
//       곱셈표를 출력하는 프로그램을 작성하세요.
//
//   |  1  2  3  4  5  6  7  8  9
//---+----------------------------
// 1 |  1  2  3  4  5  6  7  8  9
// 2 |  2  4  6  8 10 12 14 16 18
// 3 |  3  6  9 12 15 18 21 24 27
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 9 |  9 18 27 36 45 54 63 72 81

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
			printf("% 4d", i * j);
		printf("\n");
	}
}
