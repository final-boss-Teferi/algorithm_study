// 문제 : 양의 정수를 입력하고 자릿수를 출력하는 프로그램을 작성하세요.
//       예를 들어 135를 입력하면 '그 수는 3자리입니다.'라고 출력하고,
//       1314를 입력하면 '그 수는 4자리입니다.'라고 출력하면 됩니다.

#include <stdio.h>

int main(void)
{
	int num, digit;

	do
	{
		printf("양의 정수를 입력해주세요 : ");
		scanf("%d", &num);
	} while (num <= 0);
	
	digit = 0;

	while (num != 0)
	{
		digit++;
		num /= 10;
	}

	printf("그 수는 %d자리입니다.\n", digit);
}
