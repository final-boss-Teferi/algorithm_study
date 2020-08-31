// 문제 : 직각 이등변 삼각형을 출력하는 부분을
//       아래와 같은 형식의 함수로 작성하세요.
//
// void triangleLB(int n);	왼쪽 아래가 직각인 이등변 삼각형을 출력

#include <stdio.h>
#include <stdlib.h>

void triangleLB(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
}

int main(int args, char **input)
{
	args = 0;
	triangleLB(atoi(input[1]));
}
