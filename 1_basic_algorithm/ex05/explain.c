// 문제 : 중앙값을 구하는 함수는 다음과 같이 작성할 수도 있습니다.
//       그러나 실습 1C-1의 med3함수에 비해 효율이 떨어지는데, 그 이유를 설명하세요.
//
//int med3 (int a, int b, int c)
//{
//	if ((b >= a && c <= a) || (b <= a && c >= a))
//		return a;
//	else if ((a > b && c < b) || (a < b && c > b))
//		return b;
//	return c;
//}

// 답 : 실습 1C-1의 경우 먼저 숫자 2개를 비교한 후
//      그 정보를 다른 숫자를 비교하는데 활용하여 효율을 올리는데
//      이 예제의 함수는 매번 숫자 3개를 비교하기에 효율이 떨어지게됩니다.