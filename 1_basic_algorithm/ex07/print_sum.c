// 문제 : 실습 1-5 프로그램을 참고하여 n이 7이면
//       '1 + 2 + 3 + 4 + 5 + 6 + 7 = 28'로 출력하는 프로그램을 작성하세요.

#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;

	printf("n의 값을 입력해주세요 : ");
	scanf("%d", &n);

	if (n <= 1)
	{
		printf("잘못된 숫자를 입력하셨습니다.\n");
		return (0);
	}

	for (int i = 1; i <= n; i++)
	{
		if (i != 1)
			printf("+ ");
		printf("%d ", i);
		sum += i;
	}
	
	printf("= %d\n", sum);
}