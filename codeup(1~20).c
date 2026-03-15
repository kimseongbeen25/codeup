
//작업환경 세팅 확인하기//

/*
#include<stdio.h>

int main(void)
{
    printf("Hello World");
    return 0;
}*/




// 문장출력//

/*
#include<stdio.h>

int main(void)
{
    printf("문장");
    return 0;
}

출력값 => 문장 

#include<stdio.h>

int main(void)
{
    printf("문장 문장");
    return 0;
}

출력값 =>문장 문장
*/




//줄 바꿔서 입력하기//
/*
#include<stdio.h>

int main(void)
{
    printf("문장\n 문장");
    return 0;
}

출력값 =>  문장
          문장

- printf() 함수를 이용해 문장을 출력할 때, 줄을 바꾸기 위해서는 /n(new line을 의미)을
줄을 바꿀 위치에 넣어야 한다.

- /t(tab을 의미)

- 이러한 문자를 escape 문자라 하고, 출력하는 문장 안에서 원하는 형식에 맞추어 출력할 수 있도록
줄을 바꾸는 등의 특별한 의미들을 나타내기 위해 사용한다.

*/


//따옴표 출력//

/*
#include<stdio.h>

int main(void)
{
    
    printf("/'Hello/'");
    return 0;
}

출력값 => 'Hello'

 - /'는 작은 따옴표 문자가 자체 출력이 되게 된다
 - /"는 큰 따옴표 문자가 자체 출력이 되게 된다
 - //는 백 슬래시 문자가 자체 출력이 되게 된다

*/

//특수문자 출력//

/*
#include<stdio.h>

int main(void)
{
    
    printf("\"!@#$%^&*()\"");
    return 0;
}

//출력값 => "!@#$%^&*()"

- % 문자는 서식 문자의 시작을 알리는 특수한 문자이므로, %뒤에 다른 옵션이 붙어야 기능을 하게 된다
하지만 기능이 없는(유효하지 않는) 수식문자가 되는 경우 그냥 %를 출력하게 된다
- %뒤에 아무것도 쓰지 않거나 %뒤에 유효한 서식문자가 되어가는 과정이면 아무것도 출력하지 않는다
- %를 출력하고 싶다면 %앞에 %를 붙인다

*/

//윈도우 운영체제 파일 경로 출력//

/*
#include<stdio.h>

int main(void)
{
    
    printf("\"C:\\Download\\hello.cpp\"");
    return 0;
}

//출력값 => "C:\Download\hello.cpp"

*/

//유니코드로 특수문자 표현해 출력하기//

/*
#include<stdio.h>

int main(void)
{
    
    printf("\u250C\u252C\u2510\n");
    printf("\u251C\u253C\u2524\n");
    printf("\u2514\u2534\u2518\n");
    return 0;
}

//  출력값
//   ┌┬┐
//   ├┼┤
//   └┴┘

- 유니코드, 아스키코드
- \u____는 유니코드 문자가 출력되게 한다
- 원도우에서 ㅂ+한자를 누르면 선문자를 입력할 수 있다(메모장에서도 활용가능)

*/

//정수 입력 받고 정수 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", n);
    return 0;
}

입력값 => 15
출력값 => 15

*/

//문자 입력받고 문자 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    char c;
    scanf("%c", &c);
    printf("%c", c);
    return 0;
}

입력값 => f
출력값 => f

*/

//실수 입력받고 실수 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    float f;
    scanf("%f", &f);
    printf("%f", f);
    return 0;
}

입력값 => 3.245124
출력값 => 3.245124

*/

//정수 2개 입력받아 그대로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", a, b);
    return 0;
}

입력값 => 1 2
출력값 => 1 2

- 엔터나 공백으로 입력데이터를 구분되게 입력만 해주면 문제 없음
- 예를 들어서 42 17을 입력할 건데 4217이런식으로 입력만 안하면 문제가 없다는 뜻이다
*/

//문자 2개 입력받고 순서 바꿔서 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    char a, b;
    scanf("%c%c", &a, &b);
    printf("%c %c", b, a);
    return 0;
}

입력값 => a b
출력값 =>   a 

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    char a, b;
    scanf("%c %c", &a, &b);   // %c 공백 %c
    printf("%c %c", b, a);
    return 0;
}

입력값 => a b
출력값 => b a

- scanf함수에서 %d,%f,%s는 공백을 자동 무시하지만 %c는 공백도 입력으로 받는다
- 매우매우 중요하니 잘 알아두자!!

*/

//정수 2개 입력받아 그대로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d %d", a, b);
    return 0;
}

입력값 => 1 2
출력값 => 1 2

- 엔터나 공백으로 입력데이터를 구분되게 입력만 해주면 문제 없음

*/

//실수 입력받고 소수점 이하 둘째자리까지 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    float f;
    scanf("%f", &f);
    printf("%.2f", f);
    return 0;
}

입력값 => 1.592436
출력값 => 1.59

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    double f;
    scanf("%lf", &f);
    printf("%.2lf", f);
    return 0;
}

입력값 => 1.592436
출력값 => 1.59

*/

//시간 입력받아 그대로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d:%d", &a, &b);
    printf("%d:%d", a, b);
    return 0;
}

입력값 => 3:16
출력값 => 3:16

- scanf("%d:%d", &a, &b);에서 콜론(:)기호를 기준으로 두 수가 각 변수에 저장된다

*/

//연월일 입력받아 그대로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%d.%02d.%02d", a, b, c);
    return 0;
}

입력값 => 2013.8.5
출력값 => 2013.08.05

- %02d를 사용하면 2칸을 이용해 출력하는 데, 한자리 수인 경우 앞에 0을 붙여 출력한다

*/

//주민번호 입력받아 형태 바꿔 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d-%d", &a, &b);
    printf("%06d%07d", a, b);
    return 0;
}

입력값 => 040123-0512687
출력값 => 0401230512687

- printf("%d%d", a, b);는 오답이니 잘 생각해보자

*/

//단어 1개 입력받고 그대로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    char a[51] = "";
    scanf("%s", a);
    printf("%s", a);
    return 0;
}

입력값 => informations
출력값 => informations

*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    char a[100];
    scanf("%s", a);
    printf("%s", a);
    return 0;
}

입력값 => informations
출력값 => informations

*/

