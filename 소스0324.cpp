/*181p~186p 연습문제

1. 프로그램을 종료합니다

2. int num = 100;
   
   if(num != 100)
   {
		printf("100 아니네요.\n");
		printf("아쉽네요\n");
	}
	else
	{
		printf("100 이네요!\n");
	}
	printf("프로그램을 종료합니다.\n");

3. if ( num % 3 == 0 )

4. 4번

5. if ( num >= 90 )
		printf("장학생");
	else if( num <90 && num>=60 )
		printf("통과");

6. 3번 스위치문

7. 1번 break

8. 20대

9.

#include <stdio.h>

int main() {
    char ch;

    printf("A, B, C 중 하나의 키를 입력하세요: ");
    scanf(" %c", &ch);  

    switch (ch)
    {
    case 'A': case 'a':
        printf("a키\n");
        break;
    case 'B': case 'b':
        printf("b키\n");
        break;
    case 'C': case 'c':
        printf("c키\n");
        break;
    default:
        printf("잘못 눌렀습니다.\n");
        break;
    }

    return 0;
}

10. 

#include <stdio.h>

int main() {

    char ch = 'Z';

    if (ch == 'A')
        printf("A출력\n");
    else if (ch == 'B')
        printf("B출력\n");
    else if (ch == 'C')
        printf("C출력\n");
    else
        printf("모름\n");

    return 0;
}

11. 1. 2다

    2. 2다3이다

12. 
#include <stdio.h>

int main()
{
    int a = 100;

    if (a < 200) {
        printf("a가 200보다");
        printf("작습니다\n");
    }
    else
    {
        printf("a가 200보다 큽니다.");
    }
}


*/


/*249p~254p while 연습문제 9번제외하고 풀어오기

1. 3번

2. 초깃값;
while (조건식) {
    실행문;
    증감식;
}

3. 
#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }
}

4.  1. i = 100;
    2. i <= 200
    3. i++;

5. 3,4번

6. 1. 123
   2. 0
   3. 0

7. 
1. int main() {
    int  a, b;
    printf("시작값 : \n");
    scanf("%d", &a);
    printf("끝값:");
    scanf("%d", &b);

    if (a > b) { // 시작값이 끝값보다 크면 교환
        int temp = a;
        a = b;
        b = temp;
    }

    while (a <= b) {
        if (a % 2 != 0) { 
            printf("%d ", a);
        }
        a++; 
    }

    printf("\n");
    return 0;

    
}

8. #include <stdio.h>

int main() {
    int num;

    printf("숫자: ");
    scanf("%d", &num);

    while (num > 0) {
        int heart = num % 10;  
        num /= 10;             

        int count = 0;
        while (count < heart * 2) {
            printf("\u2665");
            count++;
        }
        printf("\n");
    }

    return 0;
}

10. 12번

11. i%5 ==0 || i%8==0

*/
