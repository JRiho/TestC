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

//int main()
//{
//	int input1, input2;
//	char oper;
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &input1);
//	printf("사칙연산을 입력하세요 : ");
//	scanf(" %c", &oper); // 스페이스바가 공백문자를 걸러줌.
//	printf("숫자를 입력하세요 : ");
//	scanf("%d", &input2);
//
//
//	switch (oper)
//	{
//	case '+': printf("%d + %d = %d", input1, input2, input1 + input2); break;
//	case '-': printf("%d - %d = %d", input1, input2, input1 - input2); break;
//	case '*': printf("%d * %d = %d", input1, input2, input1 * input2); break;
//	case '/': printf("%d / %d = %d", input1, input2, input1 / input2); break;
//	case '%': printf("%d %% %d = %d", input1, input2, input1 % input2); break;
//	default: printf("사칙연산을 잘 입력해주세요");
//		break;
//	}
//	return 0;
//}

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


//#include <stdio.h>
//
//int main()
//{
//	char command;
//
//	printf("<, a 왼쪽 이동 \n");
//	printf(">, d 오른쪽 이동 \n");
//	scanf("%c", &command);
//
//	switch (command)
//	{
//	case '<':
//	case 'a':
//		printf("왼쪽으로 이동합니다.\n");
//		break;
//	case '>': case 'd':
//		printf("오른쪽으로 이동합니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	const int option = 3;
//	printf("메뉴를 선택하세요");
//	printf("1.새 게임 2. 이어하기 3. 옵션 \n");
//	scanf("%d", &number);
//
//	switch (number)
//	{
//	case 1:
//		printf("새 게임 시작.\n");
//		break;
//	case 2:
//		printf("세이브 데이터 로드.\n");
//		break;
//	case option:
//		printf("옵션 세팅\n");
//		break;
//	default:
//		printf("지정된 기능이 없습니다.\n");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	printf("0~9숫자를 입력하세요.\n");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 3: case 6: case 9:
//		printf("짝");
//		break;
//	default:
//		printf("%d", number);
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//	const int x = 120;
//
//	switch (command)
//	{
//	case 'x': printf("알파벳 x 입력.\n"); break;
//	case 'X': printf(" 엑스표 입력.\n");	 break;
//
//	default:
//		break;
//	}
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d", &i_menu);
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//
//		printf("숫자 두개를 입력하세요");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	default:
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char command;
//	printf("wasd 중 하나를 입력하세요\n");
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'w': case 'W':
//		printf("위 방향키를 입력하셨습니다.");
//		break;
//	case 'a': case 'A':
//		printf("좌 방향키를 입력하셨습니다.");
//		break;
//	case 'd': case 'D':
//		printf("우 방향키를 입력하셨습니다.");
//		break;
//	case 's': case 'S':
//		printf("아래 방향키를 입력하셨습니다.");
//		break;
//	default:
//		printf("잘못 입력하셨습니다.");
//		break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int appetizer, mainDish, dessert;
//	printf("appetizer 1~3까지 골라주세요\n");
//	scanf("%d",&appetizer);
//	printf("mainDish1~3까지 골라주세요\n");
//	scanf("%d", &mainDish);
//	printf("dessert 1~3까지 골라주세요\n");
//	scanf("%d", &dessert);
//	printf("주문한 음식은 ");
//	switch (appetizer)
//	{
//	case 1: printf("캐비어, "); break;
//	case 2: printf("샐러드, "); break;
//	case 3: printf("푸아그라, "); break;
//	default: printf("잘못 입력했어"); break;
//	}
//	switch (mainDish)
//	{
//	case 1: printf("스테이크, "); break;
//	case 2: printf("생선요리, "); break;
//	case 3: printf("양갈비, "); break;
//	default: printf("잘못 입력했어"); break;
//	}
//	switch (dessert)
//	{
//	case 1: printf("케"); break;
//	case 2: printf("아이스크림"); break;
//	case 3: printf("초콜릿무스"); break;
//	default: printf("잘못 입력했어"); break;
//	}
//	printf("입니다.");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x)", i, i);
//
//		if (i >= 70 && i < 80) {i++; continue;}
//
//		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복 출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복 출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	
//	while (count > 0)
//	{
//		printf("현재 count : %d \n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 0;
//
//	while (count < 6)
//	{
//		printf("c\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = -10;
//
//	while (count <= 0)
//	{
//		printf("%d\n", count);
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 1;
//	while (count <= 100)
//	{
//		if (count % 5 == 0)
//		{
//			printf("%d\n", count);
//		}
//		count++;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char alphabet;
//	while (1)
//	{
//		printf("알파벳을 입력해주세요(다른 것 입력시 다시입력):");
//		scanf("%c", &alphabet);
//		if (alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else
//		{
//			continue;
//		}
//		printf("입력한 값 : %c\n", alphabet);
//	}
//
// }

//#include <stdio.h>
//
//int main()
//{
//	int number, total = 0;
//	while (1)
//	{
//		printf("양수를 입력해주세요 (0입력시 종료) : ");
//		scanf("%d", &number);
//
//		if (number == 0) { break; }
//		else if (number < 0) { continue; }
//
//		total = total + number;
//		printf("%d\n", total);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//	int multi = 1;
//
//	while (1)
//	{
//		multi = multi * num;
//		if (multi >= 50000) {
//			break;
//		}
//		num++;
//	}
//	printf("%d", num);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	/*char alphabet;
//	alphabet = 65;
//
//	printf("%c", alphabet);*/
//
//	char alphabet ='A';
//	while (alphabet <= 'Z')
//	{
//		if (alphabet != 'F') { printf("%c", alphabet); }
//		alphabet++;
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int turn = 0;
//	int count = 0;
//	int num;
//
//	while (count < 31)
//	{
//		printf("%c : ", 'A' + turn);
//		scanf("%d",&num);
//
//		if (num < 1 || num > 3) 
//		{
//			printf("잘못 입력하셨습니다.");
//			continue;
//		}
//
//		/*int i = 0;
//		while (i<num)
//		{
//			count++;
//			i++;
//		}*/
//		count += num;
//		
//		printf("=> %d", count);
//		printf("\n");
//
//		turn = !turn;
//		//turn = ++turn % 2;
//	}
//	printf("%c가 이겼습니다.", 'A' + turn);
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() 
//{
//    int num;
//
//    printf("숫자: ");
//    scanf("%d", &num);
//    
//    
//        while (num > 0) 
//        {
//            int heart = num % 10;
//            num /= 10;
//
//            int count = 0;
//            while (count < heart * 2) 
//            {
//                printf("\u2665");
//                count++;
//            }
//            printf("\n");
//        }
//    
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int num;
//
//    printf("숫자: ");
//    scanf("%d", &num);
//
//    int temp = num;
//    int digits = 1;
//
//    while (temp >= 10) 
//    {
//        temp /= 10;
//        digits *= 10;
//    }
//
//    while (digits > 0)
//    {
//        int heart = num / digits;
//        num %= digits;
//        digits /= 10;
//
//        int count = 0;
//        while (count < heart)
//        {
//            printf("\u2665\u2665");
//            count++;
//        }
//        printf("\n");
//
//    }
//
//    return 0;
//    printf("자릿수 : %d", digits);
//}


//#include <stdio.h>
//
//int main()
//{
//	int temperature = 40;
//	do
//	{
//		printf("현재 온도 : %d도\n", temperature);
//		temperature--;
//	} while (temperature > 28);
//
//	return 0;
//
// }

//#include <stdio.h>
//int main()
//{
//	int input;
//	enum {GAMEOVER, NEWGAME, LOADGAME, OPTION};
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.새 게임 2.이어하기 3.옵션 (0:게임종료)\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case NEWGAME:
//			printf("새 게임 시작\n");
//			break;
//		case LOADGAME:
//			printf("세이브 데이터 로드\n");
//			break;
//		case OPTION:
//			printf("옵션 세팅\n");
//			break;
//		}
//	} while (input != GAMEOVER);
//
//	printf("게임을 종료합니다.\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int input;
//	do {
//		printf("\n메뉴를 선택하세요.\n");
//		printf("1.로그인\n2.회원가입\n3.옵션\n4.만든사람\n");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("로그인\n");
//			break;
//		case 2:
//			printf("회원가입\n");
//			break;
//		case 3:
//			printf("옵션\n");
//			break;
//		case 4:
//			printf("만든사람\n");
//			break;
//		default:
//			input = 0;
//			break;
//		}
//	} while (input>=1 && input <=4);
//
//	printf("종료합니다.");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int exercise = 0;
//	int rest = 0;
//	int play = 0;
//	do 
//	{
//		printf("\n%d번째 날! \n", ++day);
//		printf("오늘은 무엇을 할까요?\n");
//		printf("1. 공부한다.\n");
//		printf("2. 운동한다.\n");
//		printf("3. 휴식한다.\n");
//		printf("4. 놀러간다.\n");
//		printf("그외. 끝낸다.\n >>");
//		scanf("%d", &command);
//		if (command == 1)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt)
//			{
//			case 1: printf("기분이 좋네요.\n");
//			case 2: printf("도서관에서\n");
//			case 3: printf("기분이 나빠요.\n");
//			case 4: printf("카페에서\n");
//			case 5: printf("학원에서\n");
//			}
//			printf("코딩 공부합니다.");
//			study++;
//		}
//		else if (command == 2)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt)
//			{
//			case 1: printf("기분이 좋네요.\n");
//			case 2: printf("헬스장에서\n");
//			case 3: printf("기분이 나빠요.\n");
//			case 4: printf("한강에서\n");
//			case 5: printf("체육관에서\n");
//			}
//			printf("운동합니다.");
//			exercise++;
//		}
//		else if (command == 3)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt)
//			{
//			case 1: printf("기분이 좋네요.\n");
//			case 2: printf("집에서\n");
//			case 3: printf("누워서\n");
//			case 4: printf("호텔에서\n");
//			case 5: printf("공원에서\n");
//			}
//			printf("휴식합니다.");
//			rest++;
//		}
//		else if (command == 4)
//		{
//			int randInt = rand() % 5 + 1;
//
//			switch (randInt)
//			{
//			case 1: printf("오버워치\n");
//			case 2: printf("리그오브레전드\n");
//			case 3: printf("스타크래프트\n");
//			case 4: printf("메이플스토리\n");
//			case 5: printf("배틀그라운드\n");
//			}
//			printf("를 합니다.");
//			play++;
//		}
//		else { break; }
//	} while (1);
//
//	if (day <= 3) 
//	{
//		printf("그대로입니다....\n");
//	}
//	else
//	{
//		int max,level;
//		/*study = 0;
//		exercise = 0;
//		rest = 0;
//		play = 0;*/
//
//		max = (study > exercise) ? study : exercise;
//		max = (max > rest) ? max : rest;
//		max = (max > play) ? max : play;
//
//		if (max == study)
//		{
//			level = study / 8;
//			switch (level)
//			{
//			case 0:
//				printf("코딩새싹이 되었습니다.!\n");
//				break;
//			case 1:
//				printf("프로그래머가 되었습니다.!\n");
//				break;
//			case 2:
//				printf("FrontEnd 개발자가 되었습니다.!\n");
//				break;
//			case 3:
//				printf("BackEnd 개발자가 되었습니다.!\n");
//				break;
//			default:
//				printf("풀스택 개발자가 되었습니다.!\n");
//				break;
//			}
//		}
//		else if (max == exercise)
//		{
//			level = study / 8;
//			switch (level)
//			{
//			case 0:
//				printf("운동새싹이 되었습니다.!\n");
//				break;
//			case 1:
//				printf("몸짱이 되었습니다.!\n");
//				break;
//			case 2:
//				printf("헬창이 되었습니다.!\n");
//				break;
//			case 3:
//				printf("트레이너가 되었습니다.!\n");
//				break;
//			default:
//				printf("운동선수가 되었습니다.!\n");
//				break;
//			}
//		}
//		else if (max == rest)
//		{
//			level = rest / 8;
//			switch (level)
//			{
//			case 0:
//				printf("푹쉬어서 건강해졌습니다.!\n");
//				break;
//			case 1:
//				printf("놀고 먹고 자고 편안한 인생입니다.!\n");
//				break;
//			case 2:
//				printf("백수가 되기 직전입니다.!\n");
//				break;
//			default:
//				printf("백수가 되었습니다.!\n");
//				break;
//			}
//		}
//		else if (max == play)
//		{
//			level = play / 8;
//			switch (level)
//			{
//			case 0:
//				printf("게임에 재능이 있나요?\n");
//				break;
//			case 1:
//				printf("게임 유튜버가 되었습니다.!\n");
//				break;
//			case 2:
//				printf("프로게이머가 되었습니다.!\n");
//				break;
//			default:
//				printf("게임 중독입니다.!\n");
//				break;
//			}
//		}
//		return 0;
//		
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//		if (sheep == 3)
//		{
//			printf("도중에 잠들었다!\n");
//			break;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 5; sheep++)
//	{
//		if (sheep == 3)
//		{
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 20; sheep++)
//	{
//		printf("양 %d마리\n", sheep);
//	}
//	printf("잠들었다!\n");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++)
//	{
//		if (sheep % 10 == 0)
//		{
//			printf("졸아서 양을 세지 못했다!\n");
//			continue;
//		}
//		if (sheep == 45)
//		{
//			printf("잠에서 깼다!");
//			break;
//		}
//		printf("양 %d마리\n", sheep);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round < 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int round;
//	for (round = 0; round <= 10; round++)
//	{
//		printf("라운드 %d\n", round);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 101; count < 111; count++)
//	{
//		printf("아파트 %d동\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number;
//	int sum_number = 0;
//	for (number = 1; number <= 20; number++)
//	{
//		sum_number = sum_number + number;
//	}
//	printf("도합 %d\n", sum_number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	int number;
//	printf("반복할 횟수를 입력하세요 : ");
//	scanf("%d", &count);
//	for (number = 0; number < count; number++)
//	{
//		printf("삐약");
//	}
//	printf("\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 10; count < 100; count++)
//	{
//		printf("%d ", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int result = 1;
//	for (int i = 3; i <= 8; i++)
//	{
//		result *= i;
//	}
//	printf("%d", result);
// 
//  return0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 50; i++)
//	{
//		int num10 = i / 10;
//		int num1 = i % 10;
//		if(num10 && num10%3 ==0 || num1 && num1 % 3)
//		// c언어에서만 사용가능한 문법이고 좀 더 심플하고 메모리에 효율이 있나?
//		//if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9 || i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int number;
//	printf("100이하의 제곱수를 출력합니다.\n");
//
//	for (number = 1; (number * number) <= 100; number++)
//	{
//		printf("%d\n", number * number);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num;
//	printf("100이하 7의 배수를 출력합니다.\n");
//
//	for (num = 7; num <= 100; num += 7)
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char input;
//	for (; ;)
//	{
//		printf("입력하세요 :");
//		scanf(" %c", &input);
//		switch (input)
//		{
//		case 's':
//			printf("START GAME\n");
//			break;
//		case 'e':
//			printf("EXIT GAME\n");
//			return 0;
//		}
//	}
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//		초기화와 증감식에 여러줄의 코드가 들어갈 수 있다.
//		조건식에 변수 하나가 들어가면 0이 될 때 반복이 멈춘다.
//		{}안에 코드가 없어도 조건문과 증감식은 실행된다.
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (int number = 10, int exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//		//변수 선언을 for문 내부에서 하면
//		//for문 내부에서만 변수가 존재하게 된다.
//	}
//	//printf("%d\n", number);
//	//때문에 for문 밖에서는 사용 불가능하다. if문이나 while문도 동일하다.
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++)
//	{
//		//for() 옆에 ;을 쓰지않도록 주의
//		//while()이나 if(),else if()도 마찬가지
//		//단 do-while문은 ;을 찍어야한다.
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 200; i++)
//	{
//		if (i % 11 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}

//#include <stdio.h>
//
//int main()
//{
//	float sqLine;
//
//	for (sqLine = 0.1; 4 * sqLine <= 21; sqLine += 0.1)
//	{
//		printf("%.1f ", sqLine);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//
//	myClass++; student = 1;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	printf("%d반 %d번\n", myClass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass = 1;
//	int student;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번 \n", myClass, student);
//	}
//	myClass++;
//	for (student = 1; student <= 3; student++)
//	{
//		printf("%d반 %d번\n", myClass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 2; myClass++)
//	{
//		for (student = 1; student <= 3; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int myClass;
//	int student;
//	for (myClass = 1; myClass <= 8; myClass++)
//	{
//		for (student = 1; student <= 30; student++)
//		{
//			printf("%d반 %d번 \n", myClass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int grade;
//	int myClass;
//	int student;
//	for (grade = 1; grade <= 8; grade++)
//	{
//		for (myClass = 1; myClass <= 8; myClass++)
//		{
//			for (student = 1; student <= 30; student++)
//			{
//				printf("%d학년 %d반 %d번 \n", grade, myClass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 2; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			int result = i * j;
//			printf("%d X %d = %d \n", i, j, result);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 2; i <= 9; i++)
//	{
//		printf("%d단\n",i);
//		if (i == 3) { continue; }
//		for (j = 1; j <= 9; j++)
//		{
//			int result = i * j;
//			printf("%d X %d = %d \n", i, j, result);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 6; j++)
//		{
//			printf("주사위1 : %d , 주사위2 : %d\n", i, j );
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d번째 내부 반복문 진입\n", outer);
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer + 1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y = 1;
//	
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y+=1;
//	
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y+=1;
//	
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y += 1;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y = 1;
//
//	for (; y <= 3;)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		y += 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int y = 1; y <= 3; y += 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int LINE = 3;
//
//	for (int y = 1; y <= LINE; y += 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y = 1; y <= LINE; y += 1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("\n");
//  return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int x = 1; x <= 4; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	
//	for (int x = 1; x <= 2; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
// 
// return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int y = 4;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//
//	for (int x = 1; x <= y; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	y -= 1;
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int y = 4;
//
//	for (; y >= 1;)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		y -= 1;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	for (int y = 4; y >= 1; y--)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int LINE = 4;
//	for (int y = LINE; y >= 1; y--)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int LINE;
//	scanf("%d", &LINE);
//	for (int y = LINE; y >= 1; y--)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int i = 1; i <= 3; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= 1; i++)
//	{
//		printf("*");
//	}
//	for (int i = 1; i <= 3; i++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//	for (int i = 1; i <= 2; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= 3; i++)
//	{
//		printf("*");
//	}
//	for (int i = 1; i <= 2; i++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//	for (int i = 1; i <= 1; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= 5; i++)
//	{
//		printf("*");
//	}
//	for (int i = 1; i <= 1; i++)
//	{
//		printf(" ");
//	}
//	printf("\n");
//	for (int i = 1; i <= 7; i++)
//	{
//		printf("*");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//	int j = 3, k = 1;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	j -= 1;
//	k += 2;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	j -= 1;
//	k += 2;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	
//	printf("\n");
//	j -= 1;
//	k += 2;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	j -= 1;
//	k += 2;
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int j = 3, k = 1;
//	for (; j >= 0;)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//		printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		j -= 1;
//		k += 2;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int k = 1;
//	for (int j = 3; j >= 0; j--)
//	{
//		for (int i = 0; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		k += 2;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int LINE = 3;
//	int k = 1;
//	for (int j = LINE; j >= 0; j--)
//	{
//		for (int i = 0; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		k += 2;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	int k = 1;
//	for (int j = LINE-1; j >= 0; j--)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		k += 2;
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf("\n");
//	printf(" ");
//	printf("*");
//	printf("*");
//	printf("*");
//	printf(" ");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("*");
//	printf(" ");
//	printf(" ");
//	printf("\n");
//}

//#include <stdio.h>
//
//int main()
//{
//	for (int x = 1; x <= 2; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (int x = 1; x <= 1; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 0; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 0; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 5; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 1; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 3; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int x = 1; x <= 2; x++)
//	{
//		printf(" ");
//	}
//	for (int x = 1; x <= 1; x++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int j = 3, k = 1;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	j -= 1;
//	k += 2;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	j -= 1;
//	k += 2;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	j += 1;
//	k -= 2;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	j += 1;
//	k -= 2;
//
//	for (int i = 1; i <= j; i++)
//	{
//		printf(" ");
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	j += 1;
//	k -= 2;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int j = 2, k = 1;
//	for (; j >= 0;)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//		printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		j -= 1;
//		k += 2;
//	}
//	j += 1;
//	k -= 2;
//	for (; j <= 3;)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		j += 1;
//		k -= 2;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int k = 1;
//	for (int j = 2; j >= 0; j--)
//	{
//		for (int i = 0; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		k += 2;
//	}
//	k -= 2;
//	for (int j = 1; j <= 3; j++)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		k -= 2;
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//	int LINE;
//	int k = 1;
//	scanf("%d", &LINE);
//	for (int j = LINE-1; j >= 0; j--)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		k += 2;
//	}
//	k -= 2;
//	for (int j = 0; j <= LINE-1; j++)
//	{
//		for (int i = 1; i <= j; i++)
//		{
//			printf(" ");
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		k -= 2;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf(" ");
//	printf(" ");
//	printf(" ");
//	printf("1");
//	printf("\n");
//	printf(" ");
//	printf(" ");
//	printf("2");
//	printf("2");
//	printf("\n");
//	printf(" ");
//	printf("3");
//	printf("3");
//	printf("3");
//	printf("\n");
//	printf("4");
//	printf("4");
//	printf("4");
//	printf("4");
//	printf("\n");
//}

#include <stdio.h>
int main()
{
	for (int i = 1; i <= 3; i++)
	{
		printf(" ");
	}
	for (int i = 1; i <= 1; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	for (int i = 1; i <= 2; i++)
	{
		printf(" ");
	}
	for (int i = 1; i <= 2; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	for (int i = 1; i <= 1; i++)
	{
		printf(" ");
	}
	for (int i = 1; i <= 3; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	for (int i = 1; i <= 4; i++)
	{
		printf("%d", i);
	}
	printf("\n");

}

