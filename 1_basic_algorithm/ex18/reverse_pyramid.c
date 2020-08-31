// 문제 : 아래와 같이 아래를 향한 n단의 숫자 피라미드를
//       출력하는 함수를 작성하세요.
//
// 1111111
//  22222
//   333
//    4
//
// void nrpira(int n);

#include <stdio.h>
#include <stdlib.h>

void nrpira(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j < n; j++)
			printf(" ");
		for (int j = 0; j < 2 * (n - i) - 1; j++)
			printf("%d", i + 1);
		printf("\n");
	}
}

int main(int args, char **input)
{
	if (args > 1)
	{
		int n = atoi(input[1]);

		nrpira(n);
	}
}