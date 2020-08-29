// 문제 : 오른쪽과 같이 두 변수 a,b에 정수를 입력하고 | a의 값 : 6, b의 값 : 8
//       b - a를 출력하는 프로그램을 작성하세요.    | b - a는 2입니다.

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("a의 값 : ");
	scanf("%d", &a);

	do
	{
		printf("b의 값 : ");
		scanf("%d", &b);
		if (b <= a)
			printf("a보다 큰 값을 입력하세요!\n");
	} while(b <= a);

	printf("b - a는 %d입니다.\n", b - a);
}
