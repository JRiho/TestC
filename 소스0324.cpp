/*181p~186p ��������

1. ���α׷��� �����մϴ�

2. int num = 100;
   
   if(num != 100)
   {
		printf("100 �ƴϳ׿�.\n");
		printf("�ƽ��׿�\n");
	}
	else
	{
		printf("100 �̳׿�!\n");
	}
	printf("���α׷��� �����մϴ�.\n");

3. if ( num % 3 == 0 )

4. 4��

5. if ( num >= 90 )
		printf("���л�");
	else if( num <90 && num>=60 )
		printf("���");

6. 3�� ����ġ��

7. 1�� break

8. 20��

9.

#include <stdio.h>

int main() {
    char ch;

    printf("A, B, C �� �ϳ��� Ű�� �Է��ϼ���: ");
    scanf(" %c", &ch);  

    switch (ch)
    {
    case 'A': case 'a':
        printf("aŰ\n");
        break;
    case 'B': case 'b':
        printf("bŰ\n");
        break;
    case 'C': case 'c':
        printf("cŰ\n");
        break;
    default:
        printf("�߸� �������ϴ�.\n");
        break;
    }

    return 0;
}

10. 

#include <stdio.h>

int main() {

    char ch = 'Z';

    if (ch == 'A')
        printf("A���\n");
    else if (ch == 'B')
        printf("B���\n");
    else if (ch == 'C')
        printf("C���\n");
    else
        printf("��\n");

    return 0;
}

11. 1. 2��

    2. 2��3�̴�

12. 
#include <stdio.h>

int main()
{
    int a = 100;

    if (a < 200) {
        printf("a�� 200����");
        printf("�۽��ϴ�\n");
    }
    else
    {
        printf("a�� 200���� Ů�ϴ�.");
    }
}


*/


/*249p~254p while �������� 9�������ϰ� Ǯ�����

1. 3��

2. �ʱ갪;
while (���ǽ�) {
    ���๮;
    ������;
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

5. 3,4��

6. 1. 123
   2. 0
   3. 0

7. 
1. int main() {
    int  a, b;
    printf("���۰� : \n");
    scanf("%d", &a);
    printf("����:");
    scanf("%d", &b);

    if (a > b) { // ���۰��� �������� ũ�� ��ȯ
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

    printf("����: ");
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

10. 12��

11. i%5 ==0 || i%8==0

*/
