// 문제 : 아래와 같이 입력한 수를 한 변으로 하는
//       정사각형을 * 기호로 출력하는 프로그램을 작성하세요.
//
// 사각형을 출력합니다.
// 입력할 수 : 4
// ****
// ****
// ****
// ****

#include <stdio.h>

int main(void)
{
	int size;

	printf("사각형을 출력합니다.\n");
	do
	{
		printf("입력할 수 : ");
		scanf("%d", &size);
		if (size <= 0)
			printf("양의 정수만 입력해주세요.\n");
	} while (size <= 0);

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
			printf("*");
		printf("\n");
	}
}
