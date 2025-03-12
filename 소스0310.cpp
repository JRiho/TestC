//#include <stdio.h>
//
//int main() 
//{
//	printf("안녕하세요\n");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n안녕하세요\n안녕하세요\n");
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	printf("안녕하세요\n");
//	printf("안녕하세요");
//	printf("안녕하세요\n");
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	printf("사과 1개\n");
//	return 0;
//}

//int main()
//{
//	int apple = 1;
//	printf("사과 %d개\n", apple);
//	return 0;
//}

//int main()
//{
//	printf("키보드 3개\n");
//	printf("마우스 2개\n");
//	return 0;
//}

//int main()
//{
//	int keyboard = 3;
//	int mouse = 2;
//	printf("키보드 : %d개\n", keyboard);
//	printf("마우스 : %d개\n", mouse);
//	return 0;
//}

//int main()
//{
//	int coin1 = 500;
//	int coin2 = 1000;
//	printf("%d + %d = %d\n", coin1, coin2, coin1 + coin2);
//	return 0;
//}

//int main() {
//	char A;
//	A = 'A';
//	printf("A = %c, A = %d\n", A, A);
//	return 0;
//}

//int main()
//{
//	double pi;
//	pi = 3.14;
//	float e = 2.718;
//	printf("pi = %.2lf, e = %.3f.. \n", pi, e);
//	return 0;
//}

// 원의 넓이는 r^2파이
// 원의 둘레는 2파이r
int main()
{
	double pi = 3.14159;
	double r = 5.0;

	double area = r * r * pi;
	double circumference = 2 * pi * r;

	printf("원의 넓이: %.f\n", area);
	printf("원의 둘레: %.f\n", circumference);
}


// 사다리꼴 넓이 ((윗변 + 아랫변 ) * 높이 ) /2