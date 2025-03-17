// 책 69p예제모음03, 81p 3 - 5, 83p 3 - 6 타이핑해오기


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	int a, b;
//	int result;
//	char k;
//
//	printf("첫 번째 계산할 값 ==> ");
//	scanf("%d", &a);
//	printf("+ - * / %% ==> ");  // %를 입력받으려면 %% 사용
//	scanf(" %c", &k);
//	printf("두 번째 계산할 값 ==> ");
//	scanf("%d", &b);
//
//	if (k == '+') {
//		result = a + b;
//		printf("%d + %d = %d \n", a, b, result);
//	}
//	else if (k == '-') {
//		result = a - b;
//		printf("%d - %d = %d \n", a, b, result);
//	}
//	else if (k == '*') {
//		result = a * b;
//		printf("%d * %d = %d \n", a, b, result);
//	}
//	else if (k == '/') {
//		if (b != 0) {
//			result = a / b;
//			printf("%d / %d = %d\n", a, b, result);
//		}
//		else
//			printf("0으로 나누면 안됩니다. \n");
//	}
//	else if (k == '%') {
//		if (b != 0) {
//			result = a % b;  // 나머지 연산 수행
//			printf("%d %% %d = %d\n", a, b, result);  // % 출력 수정
//		}
//		else
//			printf("0으로 나누면 나머지값이 안됩니다. \n");
//	}
//	else {
//		printf("잘못된 연산자 입력입니다. \n");
//	}
//
//	return 0;
//}



//#include<stdio.h>
//
//void main()
//{
//	printf("%d\n", 123);
//	printf("%5d\n", 123);
//	printf("%05d\n", 123);
//
//	printf("%f\n", 123.45);
//	printf("%7.1f\n", 123.45);
//	printf("%7.3d\n", 123.45);
//
//	printf("%s\n", "Basic-C");
//	printf("%10s\n", "Basic-C");
//}

#include <stdio.h>

void main()
{
	printf("\n줄 바꿈\n연습\n");
	printf("\t탭키\t연습\n");
	printf("이것을\r덮어씁니다.\n");
	printf("\a\a\a삐소리 3번 \n");
	printf("글자가 \"강조\"되는 효과\n");
	printf("\\\\\\ 역슬래시 세 개 출력\n");
}