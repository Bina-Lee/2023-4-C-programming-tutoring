/*
문제 설명
[ 해밍 거리 구하기 ]


unsinged int x, y를 입력 받아,
x와 y의 해밍 거리를 계산하는 프로그램을 작성하시오.

해밍 거리(Hamming distance)는 두 정수의 비트 표현에서, LSB(0번 비트)를 기준으로 서로 다른 비트의 개수를 의미한다.

예를 들어,
x = 73 (1001001), y = 29 (11101) 일 경우, 해밍 거리는 3이다.
입력 설명
unsigned int x, y를 공백으로 구분해 입력한다.

출력 설명
계산한 x와 y의 해밍 거리를 출력한다.

입력 예시 복사
1 4
출력 예시 복사
2
*/

#if 0
//박근호
#include <string.h>
int main() {
   unsigned int x, y;
   int sum = 0;
   int sum2 = 0;
   int n[8] = { 0 };
   int m[8] = { 0 };
   int flag = 0;
   scanf("%u %u", &x, &y);
   for (int i = 0; i < 8; i++) {
      sum = x % 2;
      x = x / 2;
      n[i] = sum;
      
   }
   /*for (int i = 7; i >= 0; i--) {
      printf("%u", n[i]);
   }*/
   for (int i = 0; i < 8; i++) {
      sum2 = y % 2;
      y = y / 2;
      m[i] = sum2;

   }
   for (int i = 7; i >= 0; i--) {
      if (((n[i]&~m[i]))==n[i]) {
         flag++;
      }
   }
   printf("%d", flag);
   /*
   for (int i = 7; i >= 0; i--) {
      printf("%u", m[i]);
   }*/
}
#endif

#if 0
int main(){
    unsigned int n1;
    unsigned int n2;
    scnaf("%d %d",&n1, &n2);
    int cnt=0;
    for(int i=0;i<32;i++){
        if((n1>>i & 0x01) != (n2>>i &0x01))cnt++;
    }
    printf("%d",cnt);
}

#endif

/*

문제 설명
[ 특정 비트 구간의 합 계산하기 ]

unsigned int n과 두 자연수 p, q를 입력받아,
숫자 n의 p번 비트부터 q번 비트까지의 합을 출력하는 프로그램을 작성하시오.
입력 설명
정수 n과 음이아닌 정수 p, q(0 <= p < q < 32)를 공백으로 구분해 입력한다.
출력 설명
n의 p번 비트부터 q번 비트까지의 1의 개수를 출력한다.
입력 예시 복사
29 1 3
출력 예시 복사
2
*/
#if 0
//박근호
int main() {
   int x, y;
   unsigned int k = 0;
   int sum = 0;
   int sum2 = 0;
   int n[32] = { 0 };
   int m[32]= { 0 };
   int flag = 0;
   scanf("%u", &k);
   scanf("%d %d", &x, &y);
   for (int i = 0; i < 32; i++) {
      sum = k % 2;
      k = k / 2;
      n[i] = sum;
      if (k == 0) {
         break;
      }
   }
   /*for (int i = 7; i >= 0; i--) {
      m[7 - i] = n[i];
      
   }*/
   
   for (int i = x; i < y+1; i++) {
      if (n[i] == 1) {
         flag++;
      }
      
   }
   printf("%d", flag);
   
   
   /*
   for (int i = 7; i >= 0; i--) {
      printf("%u", m[i]);
   }*/

}
#endif

/*
문제 설명
[ 모서리 행렬 만들기 ]

정수 N을 입력받아,
NxN 크기의 모서리 행렬을 출력하는 프로그램을 작성하시오.

모서리 행렬이란, 행렬의 좌상단 끝 점 (0, 0)에서 최댓값을 가지고,
시계방향으로 돌아가며 1씩 작아지는 행렬이다.
입력 설명
정수 N을 입력한다. N은 1이상 20이하 정수이다.
출력 설명
모서리 행렬을 출력한다.
단, 출력 시 %3d를 사용한다.
입력 예시 복사
7
출력 예시 복사
 49  48  47  46  45  44  43
 26  25  24  23  22  21  42
 27  10   9   8   7  20  41
 28  11   2   1   6  19  40
 29  12   3   4   5  18  39
 30  13  14  15  16  17  38
 31  32  33  34  35  36  37

///////////////////////////////////////
//코드줬음
///////////////////////////////////////


 문제 설명
[ 특정 구간 비트 1로 만들기 ]

unsigned int x와 자연수 a, b (a < b)를 입력 받아,
x의 a번 비트부터 b번 비트까지의 비트를 1로 만드는 프로그램을 작성하시오.

단, 정수 x의 LSB (Least Significant Bit)는 0번 비트이다.
입력 설명
정수 x와 자연수 a, b를 공백으로 구분해 입력한다.
출력 설명
정수 x의 a번 비트부터 b번 비트까지 모두 1로 만든 값을 출력한다.
입력 예시 복사
58 2 5
출력 예시 복사
62
*/

#if 0
//박근호
#include<math.h>
int main() {
   int x, y;
   unsigned int k = 0;
   int sum = 0;
   int sum2 = 0;
   int n[8] = { 0 };
   int m[8] = { 0 };
   int ten = 0;
   int flag = 0;
   int a0, a1, a2, a3, a4, a5, a6, a7;
   scanf("%u", &k);
   scanf("%d %d", &x, &y);
   for (int i = 0; i < 8; i++) {
      sum = k % 2;
      k = k / 2;
      n[i] = sum;
      if (k == 0) {
         break;
      }
   }
   for (int i = x; i < y + 1; i++) {
      n[i] = 1;}
   /*a0 = n[0];
   a1 = n[1];
   a2 = n[2];
   a3 = n[3];
   a4 = n[4];
   a5 = n[5];
   a6 = n[6];
   a7 = n[7];*/
   //ten = a0 + a1 * 2 + a2 * 2 * 2 + a3 * 2 * 2 * 2 + a4 * 2 * 2 * 2 * 2 + a5 * 2 * 2 * 2 * 2 * 2 + a6 * 2 * 2 * 2 * 2 * 2 * 2 + a7 * 2 * 2 * 2 * 2 * 2 * 2 * 2;
   printf("%c", n); 
}
#endif

#if 0
#include<stdio.h>
int main(){
    unsigned int x;
    int a,b;
    scanf("%d %d %d",&x, &a, &b);
    for(int i=a;i<=b;i++){
        x |= (1<<i);
    }
}
#endif

/*
문제 설명
[ 모자이크 만들기 ]

하얀 도화지에 색종이 조각을 붙인다.
색종이는 모두 직사각형이지만, 크기가 각기 다르다.
도화지에 하나씩 붙이고 나서, 최종 결과를 출력하는 프로그램을 작성하시오.

도화지의 크기는 10x10 이다.
입력 설명
첫째 줄에 붙인 색종이의 수 N을 입력한다.
둘째 줄 부터 N+1번째 줄까지 숫자를 다섯 개씩 입력한다.

첫번째 수는 색종이의 색을 나타낸다.
두번째 수와 세번째 수는 색종이를 붙이는 좌표를 의미한다.
좌표는 색종이의 좌상단 모서리를 기준으로 한다.
네번째 수와 다섯번째 수는 색종이의 크기이다. 각각 가로, 세로의 길이이다.
출력 설명
색종이가 붙지 않은 바탕은 0으로, 색종이가 붙은 곳은 색종이의 색으로 출력한다.

단, 색종이가 겹쳐서 붙은 경우, 나중에 붙인 색종이의 색을 출력한다.
입력 예시 복사
2
1 0 0 2 2
2 1 0 3 2
3 2 7 2 2
출력 예시 복사
1 1 0 0 0 0 0 0 0 0
2 2 2 0 0 0 0 0 0 0
2 2 2 0 0 0 0 3 3 0
0 0 0 0 0 0 0 3 3 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
Hint
1 0 0 2 2에 의해
1 1 0 ...
1 1 0 ...
0 0 0 ... 이 되었지만
2 1 0 3 2에 의해 덧붙여져 예시 출력처럼 되었다.

*/

//풀어봐

/*

문제 설명
[ 자유로운 접근 ]

10 바이트 크기의 data와 p를 입력받아,
data의 p번째 바이트부터 뒤 2바이트를 읽어서 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 1바이트씩 공백으로 구분하여 총 10바이트의 data를 입력한다.
단, 입력 data에 음수는 없다.

둘째 줄에 p를 입력한다. (1 <= p <= 9)
출력 설명
data의 p번째 바이트부터 뒤 2바이트를 읽어서 출력한다.
입력 예시 복사
5 4 3 2 1 1 2 3 4 5
4
출력 예시 복사
258
Hint
short 는 2byte
*/

#if 0
int main(){
    int n[10]={0,};
    n[a];
    n;

    unsigned char a[10];
    int b;
    short* c=(short*)*(a(pointer)+b(숫자));
    print("%d"c*);
}
#endif
#if 0
#include<stdio.h>
int main(){
    unsigned char arr[10];
    5
    6 7 
    unsigned int result=0;
    result+=arr[7]+arr[6]*256;
}
#endif

/*

[ 빅모세 ]

12바이트를 입력받아 배열에 저장한다.
6번째 바이트와 7번째 바이트 사이에 빅모세가 있다.
빅모세의 영향력은 좌우 6바이트씩 총 12바이트이다.

정수 n(0 <= n < 48)을 입력받아, 빅모세를 기준으로 좌우로 n비트씩 밀어낸다.
빅모세의 영향력에 의해 배열의 범위 밖으로 밀려난 비트는 사라진다.
입력 설명
첫째 줄에 1바이트 정수 12개를 공백으로 구분하여 입력한다.
둘째 줄에 빅모세가 밀어낼 비트수 n을 입력한다.
n은 0 이상 48 미만이다.
출력 설명
빅모세가 밀어낸 결과를 바이트마다 공백으로 구분하여 10진수로 출력한다.
입력 예시 복사
1 2 3 4 5 6 7 8 9 10 11 12
4
출력 예시 복사
16 32 48 64 80 96 0 112 128 144 160 17

문제 설명
[ 3의 배수인가 ]

양의 정수 N을 입력 받아,
N의 자릿수와 N이 3의 배수인지 여부를 판단하는 프로그램을 작성하시오.

입력 설명
첫째 줄에 N을 입력한다.
단, 1 <= N < 10^100
출력 설명
N이 3의 배수면 1을 출력하고 3의 배수가 아니면 0을 출력한다.
공백없이 이어서 N의 자릿수를 출력한다.
입력 예시 복사
33333333333333333333333333333333333333333333
출력 예시 복사
144
Hint
어떤 수의 각 자릿수의 값을 더한 결과가 3의 배수면, 그 수는 3의 배수이다



문제 설명
[ RGB2GRAY ]

RGB 이미지의 각 픽셀은 빨간색(R), 녹색(G), 파란색(B)의 세 가지 채널로 구성되어 있으며,
각 채널의 픽셀 값은 0부터 255까지의 정수로 표현된다.

RGB 이미지의 가로 길이 N과 세로 길이 M, 그리고 각 채널에 대한 픽셀 값을 입력받아,
이미지의 모든 픽셀에 대해 R, G, B 값의 평균을 구하여 회색조 이미지를 출력하는 프로그램을 작성하시오.
입력 설명
첫째 줄에 N과 M을 입력한다. (1 <= N, M < 100)
둘째 줄에 N개씩 숫자를 3*M줄 입력한다.

그중 첫 M줄은 각 픽셀의 R 성분이고, 이어서 G, B 성분을 각각 M줄 입력한다.
각 숫자는 0~255 사이의 값이다.
출력 설명
회색조 이미지를 배열로 출력한다.
단, 평균은 0~255 사이의 정수이고, 소수점 아래는 모두 버린다.
입력 예시 복사
5 2
0 0 255 255 0
0 245 255 255 245
255 255 255 255 255
255 255 255 255 255
127 127 255 255 127
127 127 127 127 127
출력 예시 복사
127 127 255 255 127
127 209 212 212 209
*/
#if 0
//김시진
#include <stdio.h>
int main() {

   int N, M;
   int arrR[100] = { 0 }, arrG[100] = { 0 }, arrB[100] = { 0 };
   scanf("%d %d", &N, &M);

   for (int x = 0; x < 2; x++) {
      for (int i = 0; i < N; i++) {
         scanf("%d", &arrR[i + (x * N)]);
      }
   }
   for (int x = 0; x < 2; x++) {
      for (int j = 0; j < N; j++) {
         scanf("%d", &arrG[j + (x * N)]);
      }
   }
   for (int x = 0; x < 2; x++) {
      for (int k = 0; k < N; k++) {
         scanf("%d", &arrB[k + (x * N)]);
      }
   }

   printf("\n");
   for (int i = 0; i < N + N; i++) {
      arrR[i] = arrR[i] + arrG[i] + arrG[i];
      arrR[i] /= 3;
   }
   for (int i = 0; i < N; i++) {
      printf("%d ", arrR[i]);
   }
   printf("\n");
   for (int i = N; i < N + N; i++) {
      printf("%d ", arrR[i]);
   }
   return 0;
}
#endif
#if 0
//김규현
int main() {
   int a, b;
   scanf("%d %d", &a, &b);

   unsigned char R[100][100];
   unsigned char G[100][100];
   unsigned char B[100][100];
   for (int i = 0; i < b; i++) {
      for (int k = 0; k < a; k++) {
         scanf("%hhu", &R[i][k]);
      }
   }
   for (int i = 0; i < b; i++) {
      for (int k = 0; k < a; k++) {
         scanf("%hhu", &G[i][k]);
      }
   }
   for (int i = 0; i < b; i++) {
      for (int k = 0; k < a; k++) {
         scanf("%hhu", &B[i][k]);
      }
   }

   short sum_arr[100][100] = { 0 };
   for (int i = 0; i < b; i++) {
      for (int k = 0; k < a; k++) {
         sum_arr[i][k] += (R[i][k] + G[i][k] + B[i][k]);
      }
   }

   for (int i = 0; i < b; i++) {
      for (int k = 0; k < a; k++) {
         printf("%d ", sum_arr[i][k] / 3);
      }
      printf("\n");
   }
   return 0;
}
#endif

/*
문제 설명
[ 큰 수의 덧셈 ]

최대 100자리 양수 두 개를 더할 수 있는 프로그램을 작성하시오.
입력 설명
최대 100자리 양수 두 개를 줄바꿈으로 구분해 입력한다.
출력 설명
입력한 양수 두개를 합한 결과를 출력하시오.
입력 예시 복사
1234567891011121314151617181920
1357924680123456789
출력 예시 복사
1234567891012479238831740638709
Hint
100자리 + 100자리의 결과는 101자리가 될 수 있다.


*/

#if 01
#include<stdio.h>
int main(){
    unsigned char arr1[100]={0};
    scanf("%s",arr1);
    unsigned char arr2[100]={0};
    scanf("%s",arr2);

    int length1=0;
    int length2=0;
    for(int i=0;i<100;i++){
        if(arr1[i])length1++;
        if(arr2[i])length2++;
    }
    for(int i=0;i<100-length1;i++){
        for(int j=0;j<length1;j++){
            arr1[length1+i-j]=arr1[length1-1+i-j];
        }
    }
    for(int i=0;i<100-length2;i++){
        for(int j=0;j<length2;j++){
            arr2[length2+i-j]=arr2[length2-1+i-j];
        }
    }

    unsigned char arr3[101]={0};

    for(int i=0;i<100;i++){
        arr1[i]-='0';
        arr2[i]-='0';
    }

    for(int i=99;i>=0;i--){
        arr3[i+1]=arr1[i]+arr2[i]+arr3[i+1];
        if(arr3[i+1]>9){
            arr3[i]++;
            arr3[i+1]=arr3[i+1]%10;
        }
    }

    int flag=0;
    for(int i=0;i<101;i++){
        if(arr[3])flag++;
        if(flag)printf("%d",arr3[i]);
    }
}
#endif