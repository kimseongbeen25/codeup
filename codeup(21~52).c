
// 문장 1개 입력받아 그대로 출력하기

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char a[2001];
    fgets(a, 2000, stdin);
    printf("%s", a);

    return 0;

}

-위와 같이 실행하면 공백이 포함된 문장을 키보드(stdin)로 입력받아
 최대 2000자까지 data[ ] 공간에 저장하고 출력할 수 있다.

- fgets(문자열 배열, 읽을 최대 길이, 입력스트림);
- fgets는 C언어에서 문자열을 입력받을 때 사용하는 함수
- fgets는 공백(스페이스)을 포함한 한 줄 전체를 안전하게 입력받을 수 있다
- fgets는 문자열(배열)에 저장해야 한다
- fgets에서 \n은 상황에 따라 저장될 수도 안될 수도 있다
- %s 는 문자열(string, 실로 연결된 문자들. 문장)로 출력하라는 의미이다

*/

// scanf함수 새로운 기능 //

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{   
	char data[2001];
   	scanf("%[^\n]", data);
   	printf("%s", data);
   
    return 0;

}

- 자료형을 %[^\n]로 주면, 엔터(\n)가 입력될 때까지 문자열을 받겠다는 의미가 된다
- fget함수는 엔터를 저장하지만 scanf("%[^\n]")는 엔터 직전까지만 읽고 멈춘다
- scanf("%[조건]", 배열);

char str[100];
scanf("%[abc]", str); 

- a,b,c 중 하나인 문자만을 읽는다
- 조건에 맞지 않는 문자가 나오면 입력을 멈춘다
- abfa입력시 ab가 출력된다

scanf("%[^0-9]", str);
- 숫자 나오기 전까지 읽기

scanf("%[a-z]", str)
- 소문자만 읽기

scanf("%[0-9]", str);
- 숫자만 읽기

*/

//실수 1개 입력받아 부분별로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d.%d", &a, &b);
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;

}

*/

//정수 1개 입력받아 나누어 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("[%d]\n", a*10000);
    printf("[%d]\n", b*1000);
    printf("[%d]\n", c*100);
    printf("[%d]\n", d*10);
    printf("[%d]\n", e);
    return 0;

}

 - scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);를 사용하면 1개의 숫자로 각각 구분되어 저장된다

*/

//시분초 입력받아 분만 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d:%d:%d", &a, &b, &c);
    printf("%d", b);
    return 0;

}

*/

//년월일 입력 받아 형식 바꿔 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%02d-%02d-%04d", c, b, a);
    return 0;
}

- 출력하는 자리수를 지정하기 위해 %4d와 같은 형식을 사용하면 된다
- 빈칸을 0으로 출력하기 위해서는 %04d와 같은 형식을 사용하면 된다

*/

//정수 1개를 입력받아 그대로 출력해보기.(정수의 범위는 0 ~ 4,294,967,295)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);
    printf("%u", n);
    return 0;

}

- unsigned int 데이터형을 사용하면 0 ~ 4294967295 범위의 정수를 저장할 수 있다
- int 데이터형을 사용하면-2147483648 ~ +2147483647 범위의 정수를 저장할 수 있다
- float 데이터형을 사용하면 +- 3.4*10^38 ~ +- 3.4*10^38 범위의 실수를 저장할 수 있다
- double 데이터형을 사용하면 +- 1.7*10^308 ~ +- 1.7*10^308 범위의 실수를 저장할 수 있다
- %.11lf 를 사용하면 소수점 이하 11자리까지 출력된다
- float -> f 
- double -> lf(long float)
- float -> 4byte(32bit), 정밀도 7자리(앞에서부터) 
- double -> 8byte(64bit), 정밀도 15자리(앞에서부터)

*/

//실수 1개 입력받아 그대로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);
    printf("%.11lf", a);
    return 0;

}

*/

//정수 1개 입력받아 그대로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    long long int a;
    scanf("%lld", &a);
    printf("%lld", a);
    return 0;

}

- long long int 데이터형을 사용하면 -9,223,372,036,854,775,808 ~ +9,223,372,036,854,775,807 범위의 정수값을 저장시킬 수 있다
- long long int의 형식지정자는 lld이다(8byte)
- long int의 형식지정자는 ld이다(시스템에 따라 4~8byte로 다름)


*/

//10진 정수 1개 입력받아 8진수로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%o", a);
    return 0;

}

- %d(10진수 형태)로 입력받고, %o를 사용해 출력하면 8진수(octal)로 출력된다

*/

//10진 정수 입력받아 16진수로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%x", a);
    return 0;

}

-%d(10진수 형태)로 입력받고 %x로 출력하면 16진수(hexadecimal) 소문자로 출력된다

*/

//10진 정수 입력받아 16진수로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%X", a);
    return 0;

}

- %d(10진수 형태)로 입력받고 %X로 출력하면 16진수(hexadecimal) 대문자로 출력된다

*/

//8진 정수 1개 입력받아 10진수로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a;
    scanf("%o", &a);
    printf("%d", a);
    return 0;

}

- %o로 입력받으면 8진수로 인식시켜 저장시킬 수 있고 %d로 출력하면 10진수로 출력된다

*/

// 16진 정수 1개 입력받아 8진수로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a;
    scanf("%x", &a);
    printf("%o", a);
    return 0;

}

- %x(영문자 소문자)나 %X(영문자 대문자)로 입력 받으면 16진수로 인식시켜 저장시킬 수 있고 %o로 출력하면 8진수로 출력된다

*/

//영문자 1개 입력받아 10진수로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    printf("%d", a);
    return 0;

}

- 컴퓨터로 저장되는 모든 데이터는 2진 정수화되어 저장되는데, 영문자와 특수기호 등을 저장하는 방법으로 아스키코드가 기본적으로 사용된다
- 예를 들어 영문 대문자 "A"는 10진수 65를 의미하는 2진수 값으로 저장된다

*/

//정수 2개 입력받아 나눈 몫 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a/b);
    return 0;

}

- C언어에서 정수/정수 연산의 결과는 정수(몫)로 계산된다
- 실수/정수, 정수/실수, (float)정수/정수, 정수/(float)정수 등의 연산 결과는 실수 값으로 계산된다
- (float)(정수/정수)는 정수/정수의 결과인 정수 값을 실수형(float)로 바꾸는 것으로, 계산 결과인 정수 값이 실수 형태로 변환되는 것이니 주의해야 한다.
- 정수/실수 계산결과가 자동으로 실수형으로 바뀌는 것을 묵시적 (데이터)형변환이라고 한다
- 어떤 값이나 결과의 데이터형을 강제로 바꾸는 것을 명시적 (데이터)형변환이라고 한다


int a;
scanf("%d", &a);
printf("%f", (float)a);

와 같이 실행하면, 정수로 저장되어 있는 값을 실수형(float)으로 명시적으로 변환하여 출력한다.

*/

//정수 2개 입력받아 나눈 나머지 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a%b);
    return 0;

}

- C언어에서 (정수)%(정수) 연산의 결과는 나눈 나머지로 계산된다.

*/

//정수 1개 입력받아 1 더해 출력하기(증감연산자)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    long long int a;
    scanf("%lld", &a);
    printf("%lld", a+1);
    return 0;

}

- 어떤 변수(a)에 값을 저장한 후 a+1 의 값을 출력할 수도 있고, ++a 연산을 한 후에 출력할 수도 있다
- ++a, --a, a++, a-- 와 같이 어떤 변수의 앞이나 뒤에 붙여 변수에 저장되어있는 값을 1만큼 더하거나 빼주는 연산자를 증감연산자라고 한다
- 증감연산자를 변수 앞에 붙이면 그 변수를 사용하기 전에 증감을 먼저 수행한다
- 증감연산자를 변수 뒤에 붙이면 일단 변수에 저장되어있는 값을 먼저 사용하고 난 후 나중에 증감을 수행한다

*/

//정수 2개(a, b)를 입력받아 합, 차, 곱, 몫, 나머지, 나눈 값을 자동으로 계산하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2f\n", (float)a/(float)b);
    return 0;

}

- (float)a 입니다. float(a)아니구요.

*/

//정수 3개 입력받아 합과 평균 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b+c);
    printf("%.1f", (float)(a+b+c)/3);
    return 0;

}

*/

//정수 1개 입력받아 2배 곱해 출력하기(비트 연산자)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%lld", n<<1);
    return 0;
}

- 정수를 2배로 곱하거나 나누어 계산해 주는 비트단위시프트연산자 <<, >>를 이용할 수 있다
- 2진수 형태로 저장되어 있는 값들을 왼쪽(<<)이나 오른쪽(>>)으로 지정한 비트 수만큼 밀어주면 2배씩 늘어나거나 반으로 줄어든다
- 왼쪽 비트시프트(<<)가 될 때에는 오른쪽에 0이 주어진 개수만큼 추가된다
- 오른쪽 비트시프트(>>)가 될 때에는 왼쪽에 0(0 또는 양의 정수인 경우)이나 1(음의 정수인 경우)이 개수만큼 추가된다
- 범위(32비트)를 넘어서 이동되는 비트는 삭제된다

- 11111000 = -8 
- 비트 뒤집기 00000111, +1을 하면 00001000 = 8
- 11111100 = -4
- 비트 뒺비기 00000011, +1을 하면 00000100 = 4

- int a=10;
- printf("%d", a<<1); //10을 2배 한 값인 20 이 출력된다
- printf("%d", a>>1); //10을 반으로 나눈 값인 5 가 출력된다
- printf("%d", a<<2); //10을 4배 한 값인 40 이 출력된다
- printf("%d", a>>2); //10을 반으로 나눈 후 다시 반으로 나눈 값인 2 가 출력된다

*/

//정수 2개(a, b)를 입력받아 a를 2^b배 곱한 값으로 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a<<b);
    return 0;    
}

*/

//두 정수 입력받아 비교하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a>b);
    return 0;

}

- 어떤 값을 비교하기 위해 비교/관계연산자(comparison/relational)를 사용할 수 있다
- 비교/관계연산자 >는 왼쪽의 값이 오른쪽 값 보다 큰 경우 참(true)을 나타내는 정수값 1로 계산하고,
  그 외의 경우에는 거짓(false)를 나타내는 정수값 0으로 계산한다
- 비교/관계연산자도 일반적인 사칙연산자처럼 주어진 두 수를 이용해 계산을 수행하고,
  그 결과를 1(참), 또는 0(거짓)으로 계산해 주는 연산자이다.
- 비교/관계연산자는 >, <, >=, <=, ==(같다), !=(다르다) 6개가 있다.

*/

//두 정수 입력받아 비교하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a==b);
    return 0;

}

- 어떤 값을 비교하기 위해 비교/관계연산자(comparison/relational)를 사용할 수 있다
- 비교/관계연산자 == 는 두 개의 값이 같은 경우 참(true)을 나타내는 정수값 1로 계산하고,
  다른 경우 거짓(false)를 나타내는 정수값 0으로 계산한다
- 비교/관계연산자도 일반적인 사칙연산자처럼 주어진 두 수를 이용해 계산을 수행하고,
  그 결과를 1(참), 또는 0(거짓)으로 계산해 주는 연산자이다
- a=1 와 같은 표현은 a와 1의 값이 같다는 의미가 아니라 오른쪽의 계산 결과인 1을 왼쪽의 변수 a에 저장하라는 의미이다

*/

//두 정수 입력받아 비교하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a<=b);
    return 0;

}

- >=, <= 연산자는 같음(==)을 포함한다. 따라서 “작다/크다” 또는 "같다”는 의미를 가진다.

*/

//두 정수 입력받아 비교하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    return 0;

}
 
- printf("%d", 123!=123); //비교 연산자 !=의 계산 결과인 0(거짓)이 출력된다

*/



