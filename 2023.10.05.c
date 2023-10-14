#if 0
#include<stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    int clone=input;
    int inputChar[9]={0,};
    int len;
    for(int i=8;i>=0;i--){
        inputChar[i]=input%10;
        input=input/10;
        if(input==0){
            len=9-i;
            break;
        }
    }
    // 0 0 0 0 0 1 2 3 4 
    // 0 1 2 3 4 5 6 7 8
    // 0 0 0 0 0 4 3 2 1
    // 0 0 0 0 0 0 9 0 0
    // 0 0 0 0 0 0 0 0 9
    // 0 0 0 0 0 2 0 0 4
    // 0 0 0 0 0 1 1 1 2 

    4 *10 + 3) * 10 +2 *10 +1
    // length : 4
    //배열에 숫자가 한자리씩 들어온 상태가 된다.
    //몇자리 숫자인지도 확인이 된다.
    int flag=1;
    for(int i=0;i<len/2;i++){
        if(inputChar[8-i] != inputChar[9-len+i]){
            flag=0;
            break;
        }
    }
    if(flag==1){//펠린드롬
        //펠린드롬 출력을 했다고 치자
        return 0;
    }
    int inverse[9]={0,};
    for(int i=0;i<len;i++){
        inverse[9-len+i]=inputChar[8-i];
    }
    int newLen=0;
    printf("%d",input);
    flag=0;
    for(int i=0;i<9;i++){
        if(inverse[i]){
            flag++;
        }
        if(flag){
            printf("%d",inputChar[i]);
        }
    }
}
#endif

#if 0
1 2 3 4 5
#endif

#if 01
#include<stdio.h>
int main(){
    int p[5]={0,};
    int a,b,c,d,e;
    p[0]=&a;
    int* p
    int p[10];
    p[4] == *(p+4)
}
#endif

#if 01

#endif

#if 01

#endif

#if 01

#endif

#if 01

#endif

#if 01

#endif

#if 01

#endif

