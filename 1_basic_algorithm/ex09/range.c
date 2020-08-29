// 문제 : 정수 a, b를 포함하여 그 사이의
//       모든 정수의 합을 구하는 아래 함수를 작성하세요.

#include <stdio.h>

int sumof(int min, int max)
{
	int sum = 0;

	if (max < min)
	{
		int temp = max;
		max = min;
		min = temp;
	}

	while (min < max)
		sum += min++;
	return (sum += max);
}

int main(void)
{
	int n1, n2;

	printf("사이의 합을 구할 두 수를 입력해주세요\nn1 : ");
	scanf("%d", &n1);
	printf("n2 : ");
	scanf("%d", &n2);
	printf("두 수 사이의 합은 %d 입니다.\n", sumof(n1, n2));
}