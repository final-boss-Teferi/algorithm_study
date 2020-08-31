// 문제 : 직각 이등변 삼각형을 출력하는 부분을
//       아래와 같은 형식의 함수로 작성하세요.
//
// void triangleLB(int n);	왼쪽 아래가 직각인 이등변 삼각형을 출력
//
//       또 왼쪽 위, 오른쪽 위, 오른쪽 아래가 직각인
//       이등변 삼각형을 출력하는 함수를 작성하세요.
//
// void triangleLU(int n);  왼쪽 위가 직각인 이등변 삼각형을 출력
// void triangleRU(int n);  오른쪽 위가 직각인 이등변 삼각형을 출력
// void triangleRB(int n);  오른쪽 아래가 직각인 이등변 삼각형을 출력

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

void triangleLU(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
			printf("*");
		printf("\n");
	}
}

void triangleRB(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			printf(" ");
		for (int j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}
}

void triangleRU(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = i; j < n; j++)
			printf("*");
		printf("\n");
	}
}

int main(int args, char **input)
{
	args = 0;
	int size = atoi(input[1]);
	triangleLB(size);
	printf("\n");
	triangleLU(size);
	printf("\n");
	triangleRB(size);
	printf("\n");
	triangleRU(size);
}
