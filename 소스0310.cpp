
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
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

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int randInt = rand() % 10;
//	int nextInt = rand() % 10+50;
//
//	printf("첫 숫자 : %d\n", randInt);// 0 ~ 9
//	printf("다음 숫자 : %d\n", nextInt);// 50 ~ 59
//
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	printf("내 주머니에 있는 돈은");
//	int myMoney = (rand() % 10 + 1) * 1000; //1000~ 10000
//	printf("%d원이다.\n", myMoney);
//	int coin500 = rand() % 4 * 500; // rand % 4 = 0,1,2,3 나오는 수는 0 500 1000 1500  
//	int coin100 = rand() % 5000; // 0~ ~ 4999?
//	coin100 = coin100 / 100 * 100; // 0 , 100, 200, 300 ..., 4800, 4900
//	printf("그리고 과자의 가격은");
//	printf("%d원이다.", coin500 + coin100);
//	printf("\n나는 과자를 살 수 있을까?");
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if(apple == 15) //apple이 15면 실행
//	{
//		printf("apple은 15개 있습니다. \n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple != 17) // apple이 17이 아니면 실행
//	{
//		printf("apple은 17개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple > 7) // apple이 7보다 크면 실행
//	{
//		printf("apple은 7개 보다 많습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int apple = 15;
//	if (apple < 20) // apple이 20보다 적으면 실행
//	{
//		printf("apple은 20개보다 적습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (apple) // apple이 0이 아니면 실행
//	{
//		printf("apple은 0개가 아닙니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) // apple이 0이 아니면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 0;
//	if (apple == 10)  //apple이 10이면 실행
//	{
//		printf("apple은 10개 있습니다.\n");
//	}
//	else if (apple == 0) // apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int apple = 15;
//	if (!apple) // apple이 0이면 실행
//	{
//		printf("apple은 하나도 없습니다.\n");
//	}
//	else //if가 틀리면 (apple이 0이 아니면) 실행
//	{
//		printf("apple은 0이 아닙니다.\n");
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int a;
//	printf("정수를 입력하세요 : \n");
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("입력하신 숫자는 양수 (%d)입니다.",a);
//	}
//	else if (a < 0)
//	{
//		printf("입력하신 숫자는 음수 (%d)입니다.\n",a);
//	}
//	else
//	{
//		printf("입력하신 숫자는 %d입니다.\n",a);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("정수를 입력하세요 : \n");
//	scanf("%d", &input);
//	if (input >= 10 && input <= 99)
//	{
//		printf("%d은 두 자리 숫자입니다.\n",input);
//	}
//	else
//	{
//		printf("%d는 두 자리 숫자가 아닙니다.\n", input);
//	}
//}
//
//

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150 이상입니다.\n");
//	}
//	if (height > 160)
//	{
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int height = 170;
//	if (height > 150)
//	{
//		printf("키가 150이상입니다. \n");
//	}
//	else if (height > 160)
//	{	// else if 는 if가 틀렸을 때만 실행된다.
//		printf("키가 160 이상입니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int y_age;
//	printf("나이를 입력하세요. : \n");
//	scanf("%d", &y_age);
//	if (y_age > 0)
//	{
//		printf("전체 관람가를 볼 수 있습니다.\n");
//	}
//	if (y_age >= 12)
//	{
//		printf("12세 관람가를 볼 수 있습니다.\n");
//	}
//	if (y_age >= 15)
//	{
//		printf("15세 관람가를 볼 수 있습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char initial;
//	printf("영어 문자 하나를 입력하세요.\n");
//	scanf("%c", &initial);
//	if (initial >= 'a' && initial <= 'z')
//	{
//		printf("소문자입니다.");
//	}
//	else if (initial >= 'A' && initial <= 'Z')
//	{
//		printf("대문자입니다.");
//	}
//	else
//	{
//		printf("알파벳이 아닙니다.");
//	}
//	printf("%c", initial);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다.\n");
//	}
//	else
//	{
//		if (number < answer)
//		{
//			printf("숫자2가 숫자1보다 큽니다. \n");
//		}
//		else
//		{
//			printf("숫자1과 숫자2가 같습니다. \n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number, answer;
//	scanf("%d %d", &number, &answer);
//	if (number > answer)
//	{
//		printf("숫자1이 숫자2보다 큽니다. \n");
//	}
//	else if (number < answer)
//	{
//		printf("숫자2가 숫자1보다 큽니다. \n");
//	}
//	else
//	{
//		printf("숫자1과 숫자2가 같습니다.\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int score = 75;
//	if (score > 90) // 91~100
//	{
//		printf("성적은 A등급입니다.\n");
//	}
//	else if (score > 80) // 81~90
//	{
//		printf("성적은 B등급입니다.\n");
//	}
//	else if (score > 70) // 71~80
//	{
//		printf("성적은 C등급입니다.\n");
//	}
//	else if (score > 60) // 61~70
//	{
//		printf("성적은 D등급입니다.\n");
//	}
//	else  // 0~60
//	{
//		printf("성적은 F등급입니다. \n");
//	}
//	return 0;
//}
//

//#include <stdio.h>
//
//int main()
//{
//	int number = -11;
//	if (number > 0)
//	{
//		printf("number는 양수입니다.\n");
//	}
//	else if (number < 0)
//	{
//		printf("number는 음수입니다.\n");
//	}
//	else
//	{
//		printf("number는 0입니다.\n");
//	}
//
//	if (number % 2 == 0)
//	{
//		printf("number는 짝수입니다.\n");
//	}
//	else
//	{
//		printf("number는 홀수입니다.\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char ch;
//	printf("w,a,s,d 중 하나를 입력하세요 : \n");
//	scanf("%c", &ch);
//	if (ch == 'w' || ch == 'W')
//	{
//		printf("위 방향키를 입력하셨습니다.\n");
//	}
//	else if( ch == 'a' || ch == 'A')
//	{
//		printf("좌 방향키를 입력하셨습니다.\n");
//	}
//	else if (ch == 'd' || ch == 'D')
//	{
//		printf("아래 방향키를 입력하셨습니다.\n");
//	}
//	else if (ch == 's' || ch == 'S')
//	{
//		printf("우 방향키를 입력하셨습니다.\n");
//	}
//	else
//	{
//		printf("방향키를 입력하시지 않았습니다.\n");
//	}
//	return 0;
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	int gauge;
//	printf("0~100사이의 수를 입력하세요.\n");
//	scanf("%d", &gauge);
//
//	if (gauge >= 45 && gauge <= 55) 
//	{
//		printf("Perfect");
//	}
//	else if (gauge >= 35 && gauge <= 65)
//	{
//		printf("Excellent");
//	}
//	else
//	{
//		printf("good");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int input;
//	printf("정수를 입력하세요 : \n");
//	scanf("%d", &input);
//
//	if (input % 3 == 0)
//	{
//		printf("input은 3의 배수입니다. \n");
//		if (input % 6 == 0)
//		{
//			printf("input은 6의 배수입니다. \n");
//		}
//		if (input % 9 == 0)
//		{
//			printf("input은 9의 배수입니다. \n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈 \n");
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char command = 'i';
//	switch (command)
//	{
//	case 'i':
//		printf("아이템창 오픈\n");
//	case 'm':
//		printf("지도창 오픈\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//	case 'm': printf("지도창 오픈\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'm';
//	switch (command)
//	{
//	case 'i': printf("아이템창 오픈\n");
//		break;
//	case 'm': printf("지도창 오픈 \n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("커멘드를 입력하세요:");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'i':	printf("아이템창 오픈\n");
//		break;
//	case 'm':	printf("지도창 오픈\n");
//		break;
//	default: printf("지정된 기능이 없습니다.\n");
//	}
//	return 0;
//	
//}

//#include <stdio.h>
//
//int main()
//{
//	char number = 1;
//	switch (number)
//	{
//	case 1: printf("one\n"); break;
//	case 2: printf("two\n"); break;
//	case 3: printf("three\n"); break;
//	}
//	return 0;
//}


#include <stdio.h>

int main()
{
	int input1, input2;
	char oper;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &input1);
	printf("사칙연산을 입력하세요 : ");
	scanf(" %c", &oper); // 스페이스바가 공백문자를 걸러줌.
	printf("숫자를 입력하세요 : ");
	scanf("%d", &input2);


	switch (oper)
	{
	case '+': printf("%d + %d = %d", input1, input2, input1 + input2); break;
	case '-': printf("%d - %d = %d", input1, input2, input1 - input2); break;
	case '*': printf("%d * %d = %d", input1, input2, input1 * input2); break;
	case '/': printf("%d / %d = %d", input1, input2, input1 / input2); break;
	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2); break;
	default: printf("사칙연산을 잘 입력해주세요");
		break;
	}
	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	int month;
//	printf("1~12월의 숫자를 입력하세요");
//	scanf("%d", &month);
//	
//	switch (month)
//	{
//	case 1: printf("January"); break;
//	case 2: printf("February"); break;
//	case 3: printf("March"); break;
//	case 4: printf("April"); break;
//	case 5: printf("May"); break;
//	case 6: printf("June"); break;
//	case 7: printf("July"); break;
//	case 8: printf("August"); break;
//	case 9: printf("September"); break;
//	case 10: printf("October"); break;
//	case 11: printf("November"); break;
//	case 12: printf("December"); break;
//	default: printf("숫자를 잘못 입력했습니다.");
//		break;
//	}
//}