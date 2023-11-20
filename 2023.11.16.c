/*문제 설명
[ strlen 함수 ]

size_t strlen(const char* str) 함수는 문자열의 길이를 반환하는 C 표준 라이브러리 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.

#include <stdio.h>

// ======== 코드 작성 영역 ========
size_t strlen(const char* str) {
   


}
// ===============================

int main() {

   char buffer[100];
   gets(buffer);
   printf("%zu", strlen(buffer));

   return 0;
}

입력 설명
문자열을 입력한다.
출력 설명
문자열의 길이를 출력한다.
입력 예시 복사
"I am a student at Incheon National University."
출력 예시 복사
49*/



//////////////////////////////////////////////////////////////////



/*문제 설명
[ strcnt 함수 ]


size_t strcnt(const char* str, char c) 함수는 입력한 문자열에서 특정 문자의 개수를 세어 반환하는 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#include <stdio.h>

// ======== 코드 작성 영역 ========
size_t strcnt(const char* str, char c) {
    
   
}
// ===============================

int main() {
    char buffer[100];
    char c;
    gets(buffer);
    scanf("%c", &c);
    printf("%zu", strcnt(buffer, c));
    return 0;
}

입력 설명
첫째 줄에 문자열을 입력한다.
둘째 줄에 찾을 문자 한 개를 입력한다.
출력 설명
문자열에서 찾는 문자의 개수를 세어 출력한다.
대소문자를 구분한다.
입력 예시 복사
"I am a student at Incheon National University."
i
출력 예시 복사
3*/

//////////////////////////////////////////////////////////////////

/*문제 설명
[ conv_strcpy ]

char* conv_strcpy(char* dest, const char* src, char find, char replace) 함수는 문자열과 문자 두개를 입력받아
문자열(src)에서 특정 문자(find)를 모두 찾아 다른 문자(replace)로 바꾸어 새로운 문자열(dest)에 저장하는 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.

#include <stdio.h>

// ======== 코드 작성 영역 ========
char* conv_strcpy(char* dest, const char* src, char find, char replace) {

      
}
// ===============================

int main() {

   char src[101];
   char dest[101];
   char find, replace;
   gets(src);
   scanf("%c %c", &find, &replace);

   printf("%s", conv_strcpy(dest, src, find, replace));

   return 0;
}

입력 설명
첫째 줄에 문자열을 입력한다.
둘째 줄에 찾을 문자(find)와 바꿀 문자(replace)를 입력한다.
출력 설명
문자열에서 문자를 찾아 바꾼 문자열을 출력한다.
대소문자를 구분한다.
입력 예시 복사
I am a student at Incheon National University.
a A
출력 예시 복사
I Am A student At Incheon NAtionAl University.*/

//////////////////////////////////////////////////////////////////

/*문제 설명
[ stricat 함수 ]

char* stricat(char* dest, const char* src) 함수는 문자열 두개를 입력받아
문자열(dest)의 앞에 문자열(src)을 붙여 넣는 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ======== 코드 작성 영역 ========

char* stricat(char* dest, const char* src) {


}
// ===============================

int main() {

   char src[101];
   char dest[101];
   gets(dest);
   gets(src);
   
   stricat(dest, src);
   printf("%s\n", dest);

   return 0;
}

입력 설명
첫째 줄에 문자열(dest)을 입력한다.
출력 설명
문자열에서 문자를 찾아 바꾼 문자열을 출력한다.
대소문자를 구분한다.
입력 예시 복사
I have a pen.
I have an apple.
출력 예시 복사
I have an apple.I have a pen.*/

#if 0
//박근호
#include <stdio.h>

// ======== 코드 작성 영역 ========
char* stricat(char* dest, const char* src) {
    int dest_len = 0;
    while (src[dest_len] != '\0') {
        dest_len++;
    }

    int i = 0;
    while (dest[i] != '\0') {
        dest[dest_len + i] = dest[i];
        i++;
    }
    dest[dest_len + i] = '\0';

    return dest;
}
// ===============================

int main() {
    char src[101];
    char dest[101];

    gets_s(dest);
    gets_s(src);

    stricat(dest, src);
    printf("%s\n", dest);

    return 0;
}
#endif

//////////////////////////////////////////////////////////////////
//5번

/*[ 3 byte 저장하기 업그레이드! ]

3바이트 n개 값을 합쳐 unsigned int 배열 data에 빈틈없이 저장하고,
그 결과를 공백으로 구분하여 출력하는 프로그램을 작성하시오.
단, data의 마지막 덩어리에 남는 바이트는 0으로 채운다.
입력 설명
첫째 줄에 100 이하의 양의 정수 n을 입력한다.
둘째 줄에 n개의 0 ~ 2^24 - 1 사이의 정수를 공백으로 구분하여 입력한다.
출력 설명
입력한 3바이트 정수들을 모아붙여
unsigned int 배열에 저장한 결과를 공백으로 구분하여 출력한다.
입력 예시 복사
7
7 256 1 4 3 2 1
출력 예시 복사
7 65537 1024 33554435 65536 0
Hint*/

//////////////////////////////////////////////////////////////////
//6번
/*문제 설명
[ strstr 함수 ]

char* strstr(const char* str, const char* substr) 함수는
하나의 문자열(str) 내에서 다른 문자열(substr)이 처음으로 나타나는 위치의 포인터를 반환하는 C 표준 라이브러리 함수이다.
함수의 내부를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.


#include <stdio.h>

// ======== 코드 작성 영역 ========
char* strstr(const char* str, const char* substr) {



}
// ===============================

int main() {

   char str[101];
   char str2[101];
   gets(str);
   gets(str2);
   
   char* result = strstr(str, str2);
   if (result == NULL) {
      printf("%ld", result);
   }
   else {
      printf("%d", result - str);
   }
   
   return 0;
}


입력 설명
첫째 줄에 검사항 문자열 str을 입력한다.
둘째 줄에 찾을 문자열 substr을 입력한다.
출력 설명
str 안에서 substr이 나타나는 위치를 찾아 그 위치를 가리키는 포인터를 반환한다.
찾고자 하는 문자열이 없으면 NULL 포인터를 반환한다.
입력 예시 복사
I am a student at Incheon National University.
at
출력 예시 복사
15*/

//////////////////////////////////////////////////////////////////
//7
/*문제 설명
[ 단어 단위 뒤집기 ]

문자열 source를 단어 단위로 뒤집어 문자열 destination에 저장하는 함수
void reverseStringAtSpace(char *destination, char *source)를 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#include <stdio.h>

// ======== 코드 작성 영역 ========



// ===============================

int main(int argc, char const *argv[])
{
    char str[104] = {0};
    char str2[104] = {0};
    gets(str);
    reverseStringAtSpace(str2, str);
    printf("%s", str2);
    return 0;
}

입력 설명
알파벳과 공백으로 구성된 문자열을 입력한다.
출력 설명
단어 단위로 뒤집은 문자열을 출력한다.
입력 예시 복사
Do you like my car
출력 예시 복사
car my like you Do*/

#if 0
김규현
#include <stdio.h>

// ======== 코드 작성 영역 ========
void reverseStringAtSpace(char* destination, char* source) {
   char* ptr1 = destination;
   char* ptr2 = source;
   int len = 0;
   while (*ptr2 != NULL) {
      len++;
      ptr2++;
   }
   ptr2 = source;
   int index = 0;
   int word = 0;
   while (*ptr2 != NULL) {
      word = 0;
      while (*ptr2 != ' ') {
         word++;
         ptr2++;
      }
      word += index;
      while (word > 0) {
         *(ptr1 + len - word) = *(ptr2 - word);
         index++;
         word--;
      }
      *(ptr1 + len - index) = ' ';
      
      ptr2++;
   }
   *(ptr1 + len) = '\0';

}


// ===============================

int main(int argc, char const* argv[])
{
   char str[104] = { 0 };
   char str2[104] = { 0 };
   gets(str);
   reverseStringAtSpace(str2, str);
   printf("%s", str2);
   return 0;
}
#endif

//////////////////////////////////////////////////////////////////
//8
/*문제 설명
[ 단어 내부 뒤집기 ]

문자열을 입력받고, 각 단어의 내부만을 뒤집어 출력하는 프로그램을 작성하시오.
입력 설명
알파벳과 공백으로 이루어진 문자열을 입력한다.
문자열은 최대 100자이다.
출력 설명
문자열의 각 단어의 내부를 뒤집어 출력한다.
입력 예시 복사
I wanna race for you
출력 예시 복사
I annaw ecar rof uoy*/

#if 0
//김규현
int main() {
   char str[101];
   while (scanf("%s", str) != EOF) {
      for (int i = 0; i < strlen(str); i++) {
         printf("%c", str[strlen(str) - 1 - i]);
      }
      printf(" ");
   }

   return 0;
}
#endif
//////////////////////////////////////////////////////////////////

/*문제 설명
[ 숫자를 문자열로 ]

unsigned int n과 char *destination을 인자로 받아,
destination에 n을 10진수로 작성하는 함수
void uint2str(char* destination, unsigned int n)을 완성하시오.

< 주의사항 >
추가 헤더파일 사용 금지 및 코드 작성 영역 외 수정 금지.
직접 작성한 함수 이외의 함수는 사용할 수 없음.
위 사항 적발 시 부정행위 처리함.



#include <stdio.h>

// ======== 코드 작성 영역 ========



// ===============================

int main(int argc, char const *argv[])
{
    unsigned int n;
    char str[20] = {0};
    scanf("%u", &n);
    uint2str(str, n);
    printf("%s", str);
    return 0;
}



입력 설명
unsigned int 범위의 10진 정수를 입력한다.
출력 설명
입력한 수가 출력된다.
입력 예시 복사
1234556
출력 예시 복사
1234556*/

//////////////////////////////////////////////////////////////////

/*문제 설명
[ 문자열이 100개~! ]

문자열 n개를 입력받고,
입력받은 반대 순서로 문자열을 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 1 이상 100 이하의 정수 n을 입력한다.
둘째 줄 부터 n줄에 걸쳐 알파벳과 공백으로 구성된 문자열 n개를 입력한다.
단, 각 문자열의 길이는 최대 50자이다.
출력 설명
입력한 반대 순서로 문자열들을 출력한다.
입력 예시 복사
9
See your body into the moonlight
Even if I try to cancel
All the pictures into the mind
There's a flashing in my eyes
Don't you see my Condition?
The fiction is gonna run it again
Can't you see now illusions?
Right into your mind....
Deja Vu!
출력 예시 복사
Deja Vu!
Right into your mind....
Can't you see now illusions?
The fiction is gonna run it again
Don't you see my Condition?
There's a flashing in my eyes
All the pictures into the mind
Even if I try to cancel
See your body into the moonlight*/