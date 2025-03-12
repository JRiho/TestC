
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
//int main()
//{
//	double pi = 3.14159;
//	double r = 5.0;
//
//	double area = r * r * pi;
//	double circumference = 2 * pi * r;
//
//	printf("원의 넓이: %.2lf\n", area);
//	printf("원의 둘레: %.2lf\n", circumference);
//
//	return 0;
//}
//

// 사다리꼴 넓이 ((윗변 + 아랫변 ) * 높이 ) /2


//int main()
//{
//	int bottom = 3;
//	int top = 5;
//	int height = 7;
//	int area = (bottom + top) * height / 2;
//
//	printf("사다리꼴의 넓이는 : %d\n", area);
//
//	return 0;
//}

//int main()
//{
//	int k;
//	printf("원하는 숫자를 입력 : ");
//	scanf("%d", &k);
//	printf("입력한 숫자는 : %d\n", k);
//	return 0;
//}


//int main()
//{
//	int y, x;
//	printf("더하고 싶은 값 2개 입력 : ");
//	scanf("%d %d", &y, &x);
//	printf("두 값의 합은 %d 입니다.\n", y + x);
//	return 0;
//}

//int main()
//{
//	char a, b, c;
//	printf("문자 두 개 입력 : ");
//	scanf("%c%c%c", &a, &b, &c);
//	printf("문자출력 : %c%c%c\n", a, b, c);
//	return 0;
//}

//#define PI 3.14
//
//int main()
//{
//	int radius;
//	double area,circumference;
//	
//	printf("반지름을 입력 : ");
//	scanf("%d", &radius);
//	
//
//	area = radius * radius * PI;
//	circumference = 2 * PI * radius;
//
//	
//	printf("원의 넓이는 : %.2lf\n ", area );
//	printf("원의 둘레는 : %.2lf\n", circumference);
//	return 0;
//	
//}

//int main()
//{
//	int W1, W2, H;
//	double	Area;
//
//	printf("밑변, 윗변, 높이를 순서대로 입력하세요. : ");
//	scanf(" %d %d %d", &W1, &W2, &H);
//
//	Area = (W1 + W2) * H / 2.0;
//
//	printf("사다리꼴의 넓이는 : %.2lf\n", Area);
//
//	return 0;
//
//}

//int main()
//{
//	int a = 15;
//	int b = 3;
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//	return 0;
//}

//int main()
//{
//	int number = 1;
//	number = number + 3; printf("%2d\n", number);
//	number -= 2;		printf("%2d\n", number);
//	number--;			printf("%2d\n", number);
//	return 0;
//
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", a++); // 후위 증강
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	printf("숫자 두개를 입력하세요");
//	scanf("%d %d", &a, &b);
//
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %% %d = %d\n", a, b, a % b);
//
//	return 0;
//}

//int main()
//{
//	int first = 1 % 4;
//	printf("%d = 1%%4\n", first);
//	int second = 5 % 3;
//	printf("%d = 5%%3\n", second);
//	int third = 4 % 2;
//	printf("%d = 4%%2\n", third);
//	return 0;
//}

//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d = 1%%4\n", number1);
//	printf("%d = 5%%3\n", number2);
//
//	return 0;
//}

//int main()
//{
//	int first = 1 % 3;
//	printf("%d = 1 %% 3\n", first);
//	int second = 2 % 3;
//	printf("%d = 2 %% 3\n", second);
//	int third = 3 % 3;
//	printf("%d = 3 %% 3\n", third);
//	int fourth = 4 % 3;
//	printf("%d = 4 %% 3\n", fourth);
//	int fifth = 5 % 3;
//	printf("%d = 5 %% 3\n", fifth);
//	int sixth = 6 % 3;
//	printf("%d = 6 %% 3\n", sixth);
//
//	return 0;
//}

//int main()
//{
//	int n;
//	int m;
//	printf("정수를 입력하세요");
//	scanf("%d",&n);
//
//	m = n % 50;
//	printf("%d = %d %% 50 ", m, n);
//
//}

//int main()
//{
//	int data1 = 6 / 2;
//	printf("%d = 6/2\n", data1);
//	int data2 = 6 / 3;
//	printf("%d = 6/3\n", data2);
//	int data3 = 6 / 4;
//	printf("%d = 6/4\n", data3);
//	return 0;
//}

//int main()
//{
//	int number1, number2;
//	scanf("%d %d", &number1, &number2);
//	printf("%d=", number1/ number2);
//	printf("%d/%d\n", number1, number2);
//
//	return 0;
//}

//int main()
//{
//	int coin;
//	printf("돈을 입력해주세요. (원)");
//	scanf("%d", &coin);
//
//	int coin10000 = coin / 10000;
//	coin = coin % 10000;
//	int coin5000 = coin / 5000;
//	coin = coin % 5000;
//	int coin1000 = coin / 1000;
//	printf("만원권 %d개 , ", coin10000);
//	printf("오천원권 %d개 , ", coin5000);
//	printf("천원권 %d개 , ", coin1000);
//	printf("나머지는 동전입니다.");
//	
//	return 0;
//}

// 천원미만의 젤리

//int main()
//{
//	int price, change;
//	int coin500, coin100, coin50, coin10;
//
//	printf("젤리의 가격을 입력하세요");
//	scanf("%d", &price);
//
//	change = 1000 - price;
//
//	coin500 = change / 500;
//	change %= 500;
//	coin100 = change / 100;
//	change %= 100;
//	coin50 = change / 50;
//	change %= 50;
//	coin10 = change / 10;
//	change %= 10;
//
//	printf("500원 %d , ", coin500);
//	printf("100원 %d , ", coin100);
//	printf("50원 %d , ", coin50);
//	printf("10원 %d , ", coin10);
//	return 0;
//}

//int main()
//{
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10;
//	printf("천숫자 : %d\n", randInt);
//	printf("다음숫자 : %d", nextInt);
//
//	return 0;
//}

int main()
{
	srand((unsigned int)time(NULL));
	int randInt = rand() % 10;
	int nextInt = rand() % 10+50;

	printf("첫 숫자 : %d\n", randInt);// 0 ~ 9
	printf("다음 숫자 : %d\n", nextInt);// 50 ~ 59

	return 0;
}