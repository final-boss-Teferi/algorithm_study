// 문제 : 아래와 같이 입력한 높이와 너비에 맞는
//       직사각형을 * 기호로 출력하는 프로그램을 작성하세요.
//
// 직사각형을 출력합니다.
// 높이 : 3
// 너비 : 7
// *******
// *******
// *******

#include <stdio.h>

int main(void)
{
	int col, row;

	printf("직사각형을 출력합니다.\n");
	do
	{
		printf("높이 : ");
		scanf("%d", &col);
		if (col <= 0)
			printf("양의 정수만 입력해주세요.\n");
	} while (col <= 0);
	do
	{
		printf("너비 : ");
		scanf("%d", &row);
		if (row <= 0)
			printf("양의 정수만 입력해주세요.\n");
	} while (row <= 0);

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
			printf("*");
		printf("\n");
	}
}
