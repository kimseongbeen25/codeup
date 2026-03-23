
//0 입력될 때까지 무한 출력하기1//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n;
reload:
    scanf("%d", &n);
    if(n!=0)
    {   
        printf("%d\n", n);
        goto reload;
    }

    return 0;
}

- goto 명령문을 사용하면 간단한 반복 실행을 만들 수 있다
- 반복 실행 부분을 빠져나오기 위해(즉 무한 반복을 방지하기 위해) 반복 실행 되는 도중에 조건을 검사해야 한다

goto 이름:
이 명령은 이름: 이 작성된 곳으로 프로그램의 실행 흐름을 바꾸어 준다

- "이름:" 과 같이 콜론(:)이 붙어있는 부분을 이름표(label, 레이블)라고 한다
- 레이블은 특별한 선언 없이 사용할 수 있으며 언더바(_)나 영문자로 시작하면 된다
- 레이블은 한 단어처럼 공백없이 모두 붙여 써야 한다

- switch( ) ... case ... : ... break; 에서 case ... : 도 일종의 레이블이라고 생각할 수 있다
- goto 레이블: 명령을 사용하면 반복되는 부분을 여러 개 자유롭게 만들 수 있다
- goto 명령은 반복 실행을 만들어낼 수 있는 가장 간단한 명령이지만, 복잡하게(스파게티 코드) 사용하는 경우, 이해가 어렵고 오류가 생기기 쉽다

예시
  int n;
reload: //레이블은 콜론(:)으로 끝내고, 일반적으로 들여쓰기를 하지 않는다
  scanf("%d", &n);
  printf("%d", n);
  if(n!=0) goto reload; //reload라고 적혀있는 레이블로 실행 이동

*/

//정수 n개 입력받아 n개 계속 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n, m;
    scanf("%d", &n);
reget:                      //레이블은 콜론( : ) 으로 끝난다.
    scanf("%d", &m);
    printf("%d\n", m);
    n = n-1;
    if(n != 0)
    {
        goto reget;         //reget:으로 이동, n의 값 1만큼 감소
    } 
}

*/

//0 입력될 때까지 무한 출력하기2//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while(n!=0)
    {
        printf("%d\n", n);
        scanf("%d", &n);
    }

    return 0;

}

while(조건)
{ //코드블록
  ...;
}
와 같은 방법으로 코드블록의 내용을 반복적으로 수행시킬 수 있다

수행되는 과정은
1. 먼저 조건을 검사한다
2. 코드블록을 실행한다
3. 다시 조건을 검사한다
4. 코드블록을 실행한다
...
와 같이 주어진 조건이 참인 동안 계속적으로 반복 실행한다

- 이렇게 while(조건){...}을 이용하면 goto 명령을 사용하지 않고 반복을 만들어낼 수 있다

*/

//정수 1개 입력받아 카운트다운 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while(n!=0)
    {
        printf("%d\n", n);
        n = n-1;
    }

    return 0;
}

///// 처음 알았는데 중요함 /////

int a, b = 10;

int a; → a는 초기화 안됨 (쓰레기값), int b = 10; → b만 10으로 초기화

char a = 'a';   // 문자로 인식함
char a = "a";   // 문자열로 인식함
"a" == {'a', '\0'}
👉 문자열 (배열)

*/

//문자 1개 입력받아 알파벳 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	char a = 'a';
	char b;
	scanf("%c", &b);
		
	do
	{
		printf("%c ", a);
		a+=1;
	}while(a<=b);
	
	return 0;
} 

- while(a <= 'b' + 1);  여기서 'b'는 문자 b (아스키 98) 고정값이다
- while(a <= b + 1); 입력값이 반영되어서 아스키코드 값으로 비교한다

do
{ //코드블록
  ...
}while(조건);
구조는 while( ) { ... } 과 유사한 반복 실행 구조를 만들 수 있는데
다른 점은 무조건 한 번은 실행된다는 것이다. 마지막에 세미콜론을 반드시 붙여야 한다.

예시
char x, t='a';
scanf("%c", &x);
do
{
  printf("%c ", t);
  t+=1; //t+=1; 는 t=t+1과 같은 의미이다.
}while(t<'z'+1); //의미 : t의 값이 'z'보다 작은 동안 반복된다.

// 복합 대입 연산자에 대해 //
- 컴퓨터의 세상에서 반복되는 것은 다시 쓰기 귀찮다
- 즉, 어딘가에 정의가 되어있다면 재사용하던가, 아니면 보다 간단히 쓰고 싶어한다
- 복합 대입 연산자는 대입 연산자를 함께 사용해 보다 간단히 표현하는 방법이다

- 예를 들어 어떤 연산자 X와 대입 연산자를 합쳐 "X="라고 표현하면, 이는 X 연산 후 대입하라는 의미를 간단히 나타내는 것이다
- +=, -=, *=, /=, %= ... 등의 형태들이 모두 가능하며 의미는 아래와 같다
- n = n + 3;은 n += 3; 으로 간단히 표현할 수 있다
- n = n << 1;는 n <<= 1; 로 간단히 표현할 수 있다

- 아래는 서로 다른 형태이지만 같은 기능을 하는 코드들이다
- n++;  n=n+1;  n+=1;

*/

//정수 1개 입력받아 그 수까지 출력하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int i, n;
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}


for((반복전 실행/준비 내용); (조건 검사 내용); (한번 실행한 후 처리할 작업))
{ //코드블록
  ...
} 반복 구조를 사용하자

- 이 구조는 while( ) {...}, do {...} while( ); 구조와 같이
  어떤 작업을 반복적으로 수행할 때 가장 일반적으로 많이 사용하는 구조이다

- while( ) {...}, do {...} while( ); 과 다르게
  반복을 위한 초기화/준비, 조건검사, 반복 후 증감 등을 한 번에 작성할 수 있다

for( ... ) 를 사용할 때에는 반복 실행되는 과정에 대해 정확히 이해할 필요가 있다
1. 반복 전 실행 수행(1번만 실행된다.)
2. 조건검사
3. 조건이 참이면 코드블록 실행
4. 코드블록 실행 후 증감 또는 처리 : 한 번 반복 후 처리
5. 조건검사
6. 조건이 참이면 코드블록 실행
...
의 순서로 처리된다.

*/

//짝수 합 구하기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
  int sum = 0;
  int n;
  scanf("%d", &n);
  for(int a=1; a<=n; a++)
  {
    if(a%2==0)
    {
      sum += a;
    }
  }

  printf("%d", sum);

  return 0;
}

*/

// 원하는 문자가 입력될 때까지 반복 출력하기 //

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  char c;
  scanf("%c", &c);

  while(c!='q')
  {
    printf("%c", c);
    scanf("%c", &c);
  }
  printf("%c", c);

  return 0;

}

*/

//언제까지 더해야 할까?//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int sum=0;
  int n;
  int a;
  scanf("%d", &n);

  for(a=1; n>sum; a++)
  {
    sum+=a;
  }

  printf("%d", a-1);

  return 0;

}

*/

//주사위를 2개 던지면?//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  for(int i=1; i<=a; i++)
  {
    for(int j=1; j<=b; j++)
    {
      printf("%d %d\n", i, j);
    }
  }

  return 0;

}

*/

//16진수 구구단?//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int n;
  scanf("%X", &n);

  for(int i=1; i<16; i++)
  {
    printf("%X*%X=%X\n", n, i, n*i);
  }

  return 0;

}

*/

//3 6 9 게임의 왕이 되자!//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  {
    if(i%10==3||i%10==6||i%10==9)
    {
      printf("X ");
    }

    else
    {
      printf("%d ", i);
    }
  }

  return 0;

}

*/

//빛 섞어 색 만들기//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int i, j, k;
  scanf("%d %d %d", &i, &j, &k);

  for(int a=0; a<i; a++)
  {
    for(int b=0; b<j; b++)
    {
      for(int c=0; c<k; c++)
      {
        printf("%d %d %d\n", a, b, c);
      }
    }
  }

  printf("%d", i*j*k);

  return 0;

}

*/

//3의 배수는 통과?//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  for(int i=1; i<=n; i++)
  {
    if(i%3==0)
      continue;
    printf("%d ", i);
  }

  return 0;

}

- 반복문 안에서 continue;가 실행되면 그 아래의 내용을 건너뛰고, 다음 반복을 수행한다.
  즉, 다음 반복으로 넘어가는 것이다.

for(i=1; i<=n; i++) //1부터 시작해 n까지 1씩 증가시키면서 반복한다.
{
  if(i%2==0)
    continue; //짝수라면? 아래 부분은 건너뛰고! 계속~
  printf("%d ", i); //결국 짝수가 아닐 때에만 출력된다.
}

*/

//최소공배수//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int day = 1;

  while(day%a!=0||day%b!=0||day%c!=0)
  {
    day+=1;
  }

  printf("%d", day);

  return 0;

}

*/

//이상한 출석 번호 부르기1(배열)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int total[24]={};
  int n, t;
  scanf("%d ", &n);

  for(int i=1; i<=n; i++)
  {
    scanf("%d", &t);
    total[t] = total[t]+1;
  }

  for(int i=1; i<=23; i++)
  {
    printf("%d ", total[i]);
  }

  return 0;

}

int a[100]; //a[0] ~ a[99] 까지 정수를 저장할 수 있는 배열을 만들어라.
for(i=0; i<100; i++)
{
  scanf("%d", &a[i]); // 각각의 방에 순서대로 반복하면서 값을 입력해라.
}

- 배열을 사용하기 전에 배열에 들어있는 값을 초기화시키는 것이 좋은데, 다음과 같은 여러 가지 방법이 있다

- int a[24]={}; //0번부터 23번까지 모두 0으로 초기화된다
- int a[24]={1,2,3}; //1,2,3 이 순서대로 들어가고 나머지는 모두 0으로 초기화된다.
- int a[3]={1,2,3}; //1,2,3 이 순서대로 저장된다.
- int a[3]={1,2,3,4}; //방을 3개 만들고 값을 4개를 집어넣어라? 오류 발생!

int n, i, t;
int a[24]={};
scanf("%d", &n); //개수 입력받기
for(i=1; i<=n; i++) //개수만큼 입력받기
{
  scanf("%d", &t); //읽어서
  a[t]=a[t]+1; //들어있던 값에 1만큼 더해 다시 저장. a[t]+=1 과 같다.
}
for(i=1; i<=23; i++)
{
  printf("%d ", a[i]); //1~23 번 배열에 저장되어있는 값 출력하기
}

*/

//이상한 출석 번호 부르기2(배열)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int student[100] = {};
  int n;
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  {
    scanf("%d", &student[i]);
  }

  while(n>=1)
  {
    printf("%d ", student[n]);
    n -= 1;
  }

  return 0;

}

*/

//이상한 출석 번호 부르기3(배열)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int a[10001]={};
  int n;
  int small = 0;
  scanf("%d", &n);
  for(int i=1; i<=n; i++)
  {
    scanf("%d", &a[i]);
  }
  small = a[1];
  for(int i=1; i<=n; i++)
  {
    if(a[i]<small)
    {
      small = a[i];
    }
  }
  printf("%d", small);

  return 0;

}

- char str[50];
  scanf("%s", str); //str 자체가 이미 주소(포인터)라서 &를 사용하지 않는다
  나머지의 경우 대부분 &을 필요로 한다

- int 배열에서 올바른 초기화
  int arr[50] = {0};

- char 배열에서 올바른 초기화
  char str[50] = "";

- 선언하면서 초기화
  int arr[5] = {1, 2, 3, 4, 5};

- 일부만 초기화
  int arr[5] = {1, 2}; // [1, 2, 0, 0, 0]

- 전부 0으로 초기화
  int arr[5] = {0};

- 크기 자동 설정
  int arr[] = {1, 2, 3};

- 문자열 배열 초기화
  char str[] = "hello"; // 'h' 'e' 'l' 'l' 'o' '\0'

*/

//바둑판에 흰 돌 놓기(2차원 배열)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int total[20][20]={0};
  int n;
  int a, b = 0;
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  {
    scanf("%d %d", &a, &b);
    total[a-1][b-1] = total[a-1][b-1]+1;
  }

  for(int i=0; i<=18; i++)
  {
    for(int j=0; j<=18; j++)
    {
      if(total[i][j]>=2)
      {
        total[i][j]=1;
      }
    }
  }

  for(int i=0; i<=18; i++)
  {
    for(int j=0; j<=18; j++)
    {
      printf("%d ", total[i][j]);
      if(j==18)
      {
        printf("\n");
      }
    }
  }

  return 0;

}

*/

//바둑알 십자 뒤집기(2차원 배열)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int total[20][20]={0};

  // 입력
  for(int i=0; i<=18; i++)
  {
    for(int j=0; j<=18; j++)
    {
      scanf("%d", &total[i][j]);
    }
  }
  
  int n;
  int a, b;
  scanf("%d", &n);

  for(int i=0; i<n; i++)
  {
    scanf("%d %d", &a, &b);

    // 가로
    for(int j=0; j<=18; j++)
    {
      total[a-1][j] = !total[a-1][j];
    }

    // 세로
    for(int k=0; k<=18; k++)
    {
      total[k][b-1] = !total[k][b-1];
    }
  }

  // 출력
  for(int i=0; i<=18; i++)
  {
    for(int j=0; j<=18; j++)
    {
      printf("%d ", total[i][j]);
    }
    printf("\n");
  }

  return 0;

}

*/

//설탕과자 뽑기(2차원 배열)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
  int h, w, n, l, d, x, y;
  int total[100][100] = {0};
  scanf("%d %d", &h, &w);
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
  {
    scanf("%d %d %d %d", &l, &d, &x, &y);
    for(int j=1; j<=l; j++)
    {
      if(d==0)
      {
        total[x-1][y-1]=1;
        y+=1;
      }
      else
      {
        total[x-1][y-1]=1;
        x+=1;
      }
    }
  }

  for(int i=0; i<=h-1; i++)
  {
    for(int j=0; j<=w-1; j++)
    {
      printf("%d ", total[i][j]);
    }
    printf("\n");
  }
    
  return 0;
  
}

- 2차원 배열은 좌표가 아니라 행/열 구조이다

*/

//성실한 개미(2차원 배열)//

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int main()
{
    int matrix[11][11] = {0};  //[세로][가로]
    for(int j = 1; j<=10; j++ ){
        for(int i = 1; i<=10; i++ ){
            scanf("%d ",&matrix[j][i]);
        }
    }
    int x,y;
    x = 2;
    y = 2;
    
    while(1){
 
        
        if(matrix[x][y] == 0){
            matrix[x][y] = 9;
            y ++;
        }
        if(matrix[x][y] == 1){
            y --;
            x++;
        }
        
        if(matrix[x][y] == 2){
            matrix[x][y] = 9;
            break;
        }
        else if(matrix[x][y+1] == 1 && matrix[x+1][y] == 1){
            if(matrix[x][y] == 0){
                matrix[x][y] = 9;
            }
            break;
        }
          
    }
    
    for(int i = 1; i <= 10; i++){
        for(int j =1; j <= 10; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

- 알고리즘이 기가 막히다!!

*/