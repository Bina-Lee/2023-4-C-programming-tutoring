#if 01
/*1문제 설명
[ 포인터 배열 ]

포인터 배열 data를 인자로 넘겨받아
배열 안에 있는 10개의 문자열을 차례로 출력하는 printstring 함수를 작성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#include <stdio.h>
#include <stdlib.h>

// ============== 코드 작성 영역 ==============



// ============================================

int main(int argc, char const *argv[])
{
   char *data[10];
   for (int i = 0; i < 10; i++)
   {
      data[i] = malloc(sizeof(char) * 100);
      scanf("%s", data[i]);
   }

   printstring(data);

   return 0;
}

입력 설명
10개의 문자열을 줄바꿈으로 구분해 입력한다.
출력 설명
입력한 10개의 문자열을 줄바꿈으로 구분해 차례로 출력한다.
입력 예시 복사
hPZOiW8D8Z
QMVOTD3Bq5
yskWEmqbmQ
uw3uaBC7Tx
6zM0wmXtK6
yijexWsT2F
XuRnW56p6u
CvvnKciYHc
fUGEVGiaCS
pQonT0fUpt
출력 예시 복사
hPZOiW8D8Z
QMVOTD3Bq5
yskWEmqbmQ
uw3uaBC7Tx
6zM0wmXtK6
yijexWsT2F
XuRnW56p6u
CvvnKciYHc
fUGEVGiaCS
pQonT0fUpt*/


#endif

#if 0
//박근호
#include <stdio.h>
#include <stdlib.h>

// ============== 코드 작성 영역 ==============
#include <stdio.h>

void printstring(char* data[]) {
    for (int i = 0; i < 10; i++) {
        printf("%s\n", data[i]);
    }
}
// ============================================
int main(int argc, char const* argv[]) {
    char* data[10];
    for (int i = 0; i < 10; i++) {
        data[i] = malloc(sizeof(char) * 100);
        scanf("%s", data[i]);
    }

    printstring(data);

    return 0;
}
#endif

#if 01

/*2문제 설명
[ 동적 메모리 할당 ]

Integer pointer 변수 p에 int크기로 n칸의 메모리 공간을 할당받는
void allocate_memory 함수를 작성하시오.

단, 이 코드는 OJT 서버에서만 채점할 수 있으며,
메모리를 올바르게 할당받는 코드를 작성하면 통과할 수 있다.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#define _CRT_SECURE_NO_WARNINGS
#define _MSIZE(ptr) malloc_usable_size(ptr)
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// ============== 코드 작성 영역 ==============

void allocate_memory(int** p, int n) {

}

// ============================================

int main() {
   int* p = NULL;
   int n;
   scanf("%d", &n);

   allocate_memory(&p, n);

   printf("%zu", _MSIZE(p));
   free(p);
   return 0;
}*/

#endif

#if 01

/*3문제 설명

[ 서식 지정자 구성하기 ]

사용자의 입력에 따라 서식 문자열을 생성하는
void generate_format_string(char *str, int a, int b, int c, int d) 함수를 작성하시오.

arr[4] 배열에 입력받은 값으로 서식 지정자의 유형을 결정한다.
arr 배열에서 1은 "%c", arr 배열에서 2는 "%d", arr 배열에서 3은 "%hu", arr 배열에서 4는 "%hhu"를 의미한다.
서식 지정자는 공백 없이 구성된다.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ============== 코드 작성 영역 ==============
void generate_format_string(char *str, int a, int b, int c, int d)
{
}

// ============================================

int main(int argc, char const *argv[])
{
   int arr[4];
   int data[4];
   scanf("%d %d %d %d", arr, arr + 1, arr + 2, arr + 3);
   scanf("%d %d %d %d", data, data + 1, data + 2, data + 3);

   char str[20];
   generate_format_string(str, arr[0], arr[1], arr[2], arr[3]);
   printf(str, data[0], data[1], data[2], data[3]);

   return 0;
}


입력 설명
첫 번째 줄에 서식 지정자의 유형을 결정하는 4개의 정수를 입력한다.
두 번째 줄에 서식 지정자에 따라 출력할 4개의 정수를 입력한다.
출력 설명
서식 지정자에 따라 data의 걊을 차례로 출력한다.
입력 예시 복사
1 2 3 4
100 200 65537 400
출력 예시 복사
d2001144*/

#endif

#if 01

/*4문제 설명
[ strchr_start_pos ]

입력된 문자열에서 지정된 위치부터 특정 문자가 처음으로 나타나는 위치의 인덱스를 반환하는
int strchr_start_pos(char *str, char c, int pos) 함수를 작성하시오.

함수는 문자열 str, 찾고자 하는 문자 c, 그리고 검색 시작 위치 pos를 인자로 받아,
검색 시작 위치에서 문자열의 끝까지 해당 문자를 찾고, 발견된 경우 그 위치의 인덱스를 반환한다.
만약 문자가 문자열에 없는 경우 -1을 반환한다.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ============== 코드 작성 영역 ==============

int strchr_start_pos(char *str, char c, int pos)
{
}

// ============================================

int main(int argc, char const *argv[])
{
   char str[101];
   char c;
   int n;
   gets(str);
   scanf("%d %c", &n, &c);
   printf("%d", strchr_start_pos(str, c, n));
   return 0;
}
입력 설명
첫 번째 줄에 최대 길이 100 의 문자열을 입력한다.
두 번째 줄에 검색 시작 위치와 찾고자 하는 문자를 입력한다.
출력 설명
문자열 안에서 찾고자 하는 문자가 검색 시작 위치 이후부터 처음으로 나타나는 인덱스를 출력한다.
문자가 문자열에 존재하지 않는 경우, -1을 출력한다.
입력 예시 복사
hello world
5 o
출력 예시 복사
7*/

#endif

#if 01

/*5문제 설명
[ n개의 문자열 저장 ]

2차원 포인터를 사용하여 n개의 문자열을 입력받아 저장하고, 역순으로 출력하는 프로그램을 작성하시오.
각 문자열은 동적으로 할당된 메모리에 저장된다.

단, 배열을 사용할 수 없다.
배열 사용 시 부정행위 처리함.
입력 설명
첫 번째 줄에 저장할 문자열의 개수 n을 입력한다.
그 다음 n개의 줄에 걸쳐 문자열을 입력한다. 문자열은 최대 100자이다.
출력 설명
입력받은 문자열들을 줄바꿈으로 구분하여 역순으로 출력한다.
입력 예시 복사
3
abc
look
at
출력 예시 복사
at
look
abc*/

#endif

#if 01

/*6문제 설명
[ str2uint ]

문자열을 unsigned int로 변환하는
unsigned int str2uint(char *str) 함수를 작성하시오.
str2uint 함수는 주어진 문자열에 있는 각 문자를 숫자로 변환하고, 이를 결합하여 최종적으로 부호 없는 정수를 생성한다.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ============== 코드 작성 영역 ==============

unsigned int str2uint(char *str)
{

}

// ============================================

int main(int argc, char const *argv[])
{
   char str[12];
   scanf("%s", str);
   printf("%u", str2uint(str));
   return 0;
}
입력 설명
숫자로 구성된 최대 11개의 문자열을 입력한다.
출력 설명
문자열을 unsigned int로 변환하여 출력한다.
입력 예시 복사
123456
출력 예시 복사
123456*/

#endif

#if 01

/*7문제 설명
[ 진법 변환기 어게인 ]

unsigned int를 입력받아 사용자가 지정한 진법의 문자열로 변환하는
char *uint2str_with_jinbeob(char *str, unsigned int n, int x) 함수를 작성하시오.

str에 n을 x진법으로 표현한 결과를 저장하고, str의 주소를 반환한다.


< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#include <stdio.h>

// ============== 코드 작성 영역 ==============

char *uint2str_with_jinbeob(char *str, unsigned int n, int x)
{

}

// ============================================

int main(int argc, char const *argv[])
{
   unsigned int t;
   int n;
   char str[50] = {0};
   scanf("%u %d", &t, &n);
   printf("%s", uint2str_with_jinbeob(str, t, n));
   return 0;
}

입력 설명
unsigned int 값과 변환할 진법을 차례로 입력한다.
변환할 진법은 2~10이다.
출력 설명
입력받은 정수값을 지정된 진법의 문자열로 변환하여 출력한다.
입력 예시 복사
29 2
출력 예시 복사
11101*/

#endif

#if 01

/*8문제 설명
[ enhanced strstr ]

주어진 문자열(str) 내에서 부분 문자열(str2)을 앞에서부터 찾아,
그 시작 위치를 반환하는 char *enhanced_strstr(char *str, char *str2) 함수를 작성하시오.

단, str인수로 NULL이 입력된 경우, 이전에 검색한 str을 이어서 검색한다.

예를 들어, 함수의 인자로
str = "hellohello", str2 = "lo" 입력된 경우 반환되는 주소는 str+3이고, 이어서
str = NULL과 str2 = "lo"가 입력되면 이전의 str+4부터 검색하여 str+8을 반환한다.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ============== 코드 작성 영역 ==============

char *enhanced_strstr(char *str, char *str2)
{
}

// ============================================

int main(int argc, char const *argv[])
{
   char str1[104];
   char str2[104];
   gets(str1);
   gets(str2);
   char *p = enhanced_strstr(str1, str2);
   if (p == NULL)
   {
      printf("yatppi!");
   }
   while (p)
   {
      printf("%s\n", p);
      p = enhanced_strstr(NULL, str2);
   }
   return 0;
}
입력 설명
첫째 줄에 검색 대상 문자열(str)을 입력한다.
둘째 줄에 찾고자 하는 부분 문자열(str2)를 입력한다.
출력 설명
검색 대상 문자열(str)에서 부분 문자열(str2)이 나타나는 위치를 출력한다.
부분 문자열이 하나도 없으면 "yatppi!"를 출력한다.
입력 예시 복사
hellohello
lo
출력 예시 복사
lohello
lo
Hint
변수에 static 키워드를 사용하면 프로그램이 종료될 때 까지 해당 변수가 유효하다.*/

#endif

#if 01

/*9문제 설명
[ 단어 개수 카운트 ]

주어진 문자열에서 단어의 개수를 세는 word_count 함수를 작성하시오.
함수는 문자열을 인자로 받아, 공백으로 구분된 단어의 총 개수를 계산한다.
이때, 문자열의 시작이나 중간에 공백이 연속된 경우가 존재할 수 있다.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ============== 코드 작성 영역 ==============

int word_count(char *str)
{
}

// ============================================
int main(int argc, char const *argv[])
{
   char str[104] = {0};
   gets(str);
   printf("%d", word_count(str));
   return 0;
}
입력 설명
최대 길이 103자 문자열을 입력한다.
출력 설명
문자열 내의 단어 개수를 출력한다.
입력 예시 복사
  incheon    national  university
출력 예시 복사
3*/

#endif

#if 01

/*10문제 설명
[ 3byte 읽기 업그레이드! ]

정수 n과 n개의 unsigned int 값들을 입력받아 배열에 저장한다.
이 배열에서 앞부터 3바이트씩 데이터를 읽어서 출력하시오.
n은 1에서 100 사이의 값이며, 출력할 때 1~2바이트가 남을 경우, 뒤에 바이트는 0으로 취급한다.

입력 설명
첫째 줄에 정수 n을 입력한다.
둘째 줄에 n개의 unsigned int 값을 입력한다.
출력 설명
unsigned int 배열의 앞부터 3바이트씩 읽은 데이터를 공백으로 구분하여 출력한다.
1~2바이트가 남는 경우, 뒤에 바이트는 0으로 취급한다.
입력 예시 복사
3
33554433 196608 1024
출력 예시 복사
1 2 3 4*/
#endif