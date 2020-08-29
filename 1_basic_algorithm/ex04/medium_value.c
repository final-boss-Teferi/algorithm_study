// 문제 : 세 값의 대소 관계 13종류의 모든 조합에 대해
//       중앙값을 구하여 출력하는 프로그램을 작성하세요.

#include <stdio.h>

int med3(int a, int b, int c)
{
	if (a > b)
	{
		if (b >= c)
			return (b);
		else if (a > c)
			return (c);
		else
			return (a);
	}
	else if (a > c)
		return (a);
	else if (b > c)
		return (c);
	else
		return (b);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void permutation(int *arr, int start, int end)
{
	if (start == end)
		return ;
	for (int i = start; i < end; i++)
	{
		swap(&arr[start], &arr[i]);
		permutation(arr, start + 1, end);
		swap(&arr[start], &arr[i]);
	}
	printf("%d, %d, %d / med = %d\n", arr[0], arr[1], arr[2], med3(arr[0], arr[1], arr[2]));
}

int main(void)
{
	int arr[3] = { 3, 2, 2 };

	permutation(arr, 0, 3);
}