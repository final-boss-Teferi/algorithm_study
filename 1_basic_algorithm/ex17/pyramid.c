// 문제 : n단의 피라미드를 출력하는 함수를 작성하세요(아래는 4단의 예).
//
//    *
//   ***
//  *****
// *******
//
// void spira(int n);

#include <stdio.h>
#include <stdlib.h>

void spira(int n)
{
	for (int i = 0; i < n; )
	{
		for (int j = ++i; j < n; j++)
			printf(" ");
		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}

int main(int args, char **input)
{
	if (args > 1)
	{
		int n = atoi(input[1]);
		spira(n);
	}
}
