
//참 거짓 바꾸기(논리연산자)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", !a);
    return 0;

}

- C언어에서 비교/관계 연산(==, !=, >, <, >=, <=)이 수행될 때, 0은 거짓(false)으로 인식되고, 0이 아닌 모든 수는 참(true)으로 인식된다
- 참 또는 거짓의 논리값을 역(반대)으로 바꾸기 위해서는 논리(logical)연산자 !를 사용할 수 있다
- 이러한 논리연산을 NOT 연산이라고도 부르고, 프라임(기호 오른쪽에 따옴표) 이나 바(기호 위에 가로 막대)로 표시하고,
  집합 기호로는 c (여집합, complement)를 의미한다. 모두 같은 의미이다.

- 참, 거짓의 논리값(boolean value)인 불 값을 다루어주는 논리연산자는 !(not), &&(and), ||(or) 이 있다
- 불 대수(boolean algebra)는 수학자 불이 만들어낸 것으로 참/거짓만 가지는 논리값과 그 연산을 다룬다

- printf("%d", !0); //거짓의 반대, 즉 참인 1로 계산됨
- printf("%d", !1); //참의 반대, 즉 거짓인 0으로 계산됨
- printf("%d", !999); //참의 반대, 즉 거짓인 0으로 계산됨
- 어떤 변수 a에, !a 와 같은 논리 연산이 가능하다.

*/

//둘 다 참일 경우만 참 출력하기(논리연산자)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a&&b);
    return 0;

}

- 논리연산자 && 는 주어진 2개의 논리값이 모두 참(1) 일 때에만 1(참)로 계산하고, 그 외의 경우에는 0(거짓) 으로 계산한다
- 이러한 논리연산을 AND 연산이라고도 부르고, · 으로 표시하거나 생략하며, 집합 기호로는 ∩(교집합, intersection)을 의미한다

- printf("%d", 1&&1); //둘 다 참을 의미하므로 1로 계산되어 출력된다.

*/

//하나라도 참이면 참 출력하기(논리연산자)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a||b);
    return 0;

}

- 논리연산자 || 는 주어진 2개의 논리값 중에 하나라도 참(1) 이면 1(참)로 계산하고, 그 외의 경우에는 0(거짓) 으로 계산한다
- | 기호는 쉬프트를 누른 상태에서 백슬래시(\)를 누르면 나오는 기호로, 버티컬 바(vertical bar) 기호이다
- 이러한 논리연산을 OR 연산이라고도 부르고, + 로 표시하며, 집합 기호로는 ∪(합집합, union)을 사용한다

- printf("%d", 0||0); //둘 다 거짓을 의미하므로 0이 계산되어 출력된다

// or 연산 +로 표시, and 연산 *로 표시

*/

//참/거짓이 서로 다를 때에만 참 출력하기(논리연산자)//


/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a!=b);
    return 0;

}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a^b);  
    return 0;

}



*/








