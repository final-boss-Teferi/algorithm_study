// 문제 : 1부터 10까지의 합은 (1 + 10) * 5와 같은 방법으로 구할 수 있습니다.
//       가우스의 덧셈이라는 이 방법을 이용하여
//       1부터 n까지의 정수 합을 구하는 프로그램을 작성하세요.

#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;

	printf("n의 값을 입력해주세요 : ");
	scanf("%d", &n);

	sum = (n * (n + 1)) / 2;
	printf ("1부터 n까지의 합 : %d\n", sum);
}